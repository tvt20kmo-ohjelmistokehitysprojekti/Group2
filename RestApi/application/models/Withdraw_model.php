<?php
/**
 *
 */
class Account_model extends CI_model
{
  function update_account($id, $update_data){
    $this->db->where('idAccount',$id);
    $this->db->update('account',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }
}
