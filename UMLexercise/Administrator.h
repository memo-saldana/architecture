#pragma once
#include "User.h"

class Administrator : public User{
  public:
    // constructors
    Administrator() : User() {
      adminName="";
      email="";
    }
    Administrator(string userId, string password, string loginStatus, string adminName, string email): User(userId, password, loginStatus) {
      this->adminName = adminName;
      this->email = email;
    }

    // getters
    string getEmail(){
      return email;
    }
    string getAdminName(){
      return adminName;
    }
    // setters
    void setEmail(string email){
      this->email = email;
    }
    void setAdminName(string adminName){
      this->adminName = adminName;
    }

    bool updateCatalog(){
      // updates catalog
      return true;
    }
  private:
    string adminName;
    string email;

};