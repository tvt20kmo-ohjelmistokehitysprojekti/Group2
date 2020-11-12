<?php

defined('BASEPATH') OR exit('No direct script access allowed');

// This can be removed if you use __autoload() in config.php OR use Modular Extensions
/** @noinspection PhpIncludeInspection */
require APPPATH . 'libraries/REST_Controller.php';

/**
 * This is an example of a RestApi based on PHP and CodeIgniter 3.
 *
 *
 * @package         CodeIgniter
 * @subpackage      Rest Server
 * @category        Controller
 * @author          Pekka Alaluukas (edited the version made by Phil Sturgeon & Chris Kacerguis)
 * @license         MIT
 * @link            https://github.com/chriskacerguis/codeigniter-restserver
 */
class Account extends REST_Controller {

    public function account_put()
    {
        // Update the account
        $id=$this->get('id');
        $update_data=array(
            'account_number'=>$this->put('account_number'),
            'account_balance'=>$this->put('account_balance'),
            //join
        );
        $result=$this->Account_model->update_account($id, $update_data);

        if($result)
        {
          $message = [
              'idAccount' => $id,
              'account_number' => $this->put('account_number'),
              'account_balance' => $this->put('account_balance'),
              //join
              'message' => 'Updates a resource'
          ];

            $this->set_response($message, REST_Controller::HTTP_CREATED); // CREATED (201) being the HTTP response code
        }
        else
        {
            // Set the response and exit
            $this->response([
                'status' => FALSE,
                'message' => 'Can not update data'
            ], REST_Controller::HTTP_CONFLICT); // CAN NOT CREATE (409) being the HTTP response code
        }
    }
}
