#pragma once
#include <string>
using namespace std;

class User{
  public:
    // Constructors
    User(){
      this->userId = "";
      this->password = "";
      this->loginStatus = "";
    }
    User(string userId, string password, string loginStatus){
      this->userId = userId;
      this->password = password;
      this->loginStatus = loginStatus;
    }
    // getters
    string getUserId(){
      return userId;
    }
    string getPassword(){
      return password;
    }
    string getLoginStatus(){
      return loginStatus;
    }
    // setters
    void setUserId(string userId){
      this->userId = userId;
    }
    void setPassword(string password){
      this->password = password;
    }
    void setLoginStatus(string loginStatus){
      this->loginStatus = loginStatus;
    }

    virtual bool verifyLogin() {
      return loginStatus=="loggedIn";
    }

  private:
    string userId;
    string password;
    string loginStatus;
};

