<?php
/**
 * Edited for project!
 * status: ready
 * tested: yes
 */
class Log_model extends CI_model
{
  function get_log($id){
    $this->db->select('*');
    $this->db->from('log l');
    $this->db->join('account a','a.idAccount=l.idAccount','right');
    $this->db->join('user u','u.idUser=a.idUser','right');
    if($id !== NULL) {
      $this->db->where('card_id',$id);
    }
    return $this->db->get()->result_array();
  }
  function add_log($add_data){
    $this->db->insert('log',$add_data);
    if($this->db->insert_id()!==NULL){
      return $this->db->insert_id(); 
    }
    else {
      return FALSE;
    }  
  }
  function update_log($id, $update_data){
    $this->db->where('idLog',$id);
    $this->db->update('log',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE; 
    }
    else {
      return FALSE;
    }
  }

  function delete_log($id){
    $this->db->where('idLog',$id);
    $this->db->delete('log');
    if($this->db->affected_rows()>0){
      return TRUE; 
    }
    else {
      return FALSE;
    }
  }


}
