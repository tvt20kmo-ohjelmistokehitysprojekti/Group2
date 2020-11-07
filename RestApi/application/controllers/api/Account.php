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

    function __construct()
    {
        //enable cors
        header('Access-Control-Allow-Origin: *');
        header("Access-Control-Allow-Methods: GET, POST, OPTIONS, PUT, DELETE");
        // Construct the parent class
        parent::__construct();

        $this->load->model('Account_model');
    }

    public function account_get()
    {
        // user from a data store e.g. database

        $id = $this->get('id');

        // If the id parameter doesn't exist return all accounts
        if ($id === NULL)
        {
            $account=$this->Account_model->get_account(NULL);
            // Check if the account data store contains user (in case the database result returns NULL)
            if ($account)
            {
                // Set the response and exit
                $this->response($account, REST_Controller::HTTP_OK); // OK (200) being the HTTP response code
            }
            else
            {
                // Set the response and exit
                $this->response([
                    'status' => FALSE,
                    'message' => 'No account were found'
                ], REST_Controller::HTTP_NOT_FOUND); // NOT_FOUND (404) being the HTTP response code
            }
        }

         // Find and return a single record for a particular account.
        else {
            // Validate the id.
            if ($id <= 0)
            {
                // Invalid id, set the response and exit.
                $this->response(NULL, REST_Controller::HTTP_BAD_REQUEST); // BAD_REQUEST (400) being the HTTP response code
            }

            // Get the account from the database, using the id as key for retrieval.
            $account=$this->Account_model->get_account($id);
            if (!empty($account))
            {
                $this->set_response($account, REST_Controller::HTTP_OK); // OK (200) being the HTTP response code
            }
            else
            {
                $this->set_response([
                    'status' => FALSE,
                    'message' => 'Account could not be found'
                ], REST_Controller::HTTP_NOT_FOUND); // NOT_FOUND (404) being the HTTP response code
            }
        }

    }

    public function account_post()
    {
        // Add a new account
        $add_data=array(
          'account_number'=>$this->post('account_number'),
          'account_balance'=>$this->post('account_balance'),
          //join
        );
        $insert_id=$this->Account_model->add_account($add_data);
        if($insert_id)
        {
            $message = [
                'idAccount' => $insert_id,
                'account_number' => $this->post('account_number'),
                'account_balance' => $this->post('account_balance'),
                //join
                'message' => 'Added a resource'
            ];
            $this->set_response($message, REST_Controller::HTTP_CREATED); // CREATED (201) being the HTTP response code
        }
        else
        {
            // Set the response and exit
            $this->response([
                'status' => FALSE,
                'message' => 'Can not add data'
            ], REST_Controller::HTTP_CONFLICT); // CAN NOT CREATE (409) being the HTTP response code
        }

    }
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

    public function account_delete()
    {
        $id = $this->get('id');

        // Validate the id.
        if ($id <= 0)
        {
            // Set the response and exit
            $this->response(NULL, REST_Controller::HTTP_BAD_REQUEST); // BAD_REQUEST (400) being the HTTP response code
        }
        $result=$this->Account_model->delete_account($id);
        if ($result)
        {
          $message = [
              'idAccount' => $id,
              'message' => 'Deleted the resource'
          ];
          $this->set_response($message, REST_Controller::HTTP_OK);
        }
        else
        {
            // Set the response and exit
            $this->response([
                'status' => FALSE,
                'message' => 'Can not delete data'
            ], REST_Controller::HTTP_CONFLICT); // CAN NOT CREATE (409) being the HTTP response code
        }
    }



}
