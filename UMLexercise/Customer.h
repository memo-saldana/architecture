#pragma once

#include "User.h"
#include "ShoppingCart.h"
#include "Order.h"

class Customer : public User{
  public:
    Customer() : User(){
      name = "";
      address ="";
      email = "";
      shippingInfo = "";
      shoppingCart = ShoppingCart();
      order = Order();
    }
  Customer(string userId, string password, string loginStatus, string name, string address, string email, string shippInfo, ShoppingCart shoppingCart, Order order) : User( userId, password, loginStatus) {
    this -> name = name;
    this -> address =address;
    this -> email = email;
    this -> shippingInfo = shippInfo;
    this -> shoppingCart = shoppingCart;
    this -> order = order;
  }
  // getters
  string getName(){
    return name;
  }
  string getAddress(){
    return address;
  }
  string getEmail(){
    return email;
  }
  string getShippingInfo(){
    return shippingInfo;
  }
  ShoppingCart getShoppingCart(){
    return shoppingCart;
  }
  Order getOrder(){
    return order;
  }
  // setters
  void setName(string name){
    this->name = name;
  }
  void setAddress(string address){
    this->address = address;
  }
  void setEmail(string email){
    this->email = email;
  }
  void setShippingInfo(string shippingInfo){
    this->shippingInfo = shippingInfo;
  }
  void setShoppingCart(ShoppingCart shoppingCart){
    this->shoppingCart = shoppingCart;
  }
  void setOrder(Order order){
    this->order = order;
  }

  bool registerCustomer(){
    // registers
    return true;
  }
  bool login(){
    // log in
    return true;
  }
  void updateProfile(Customer customer){
    // update profile
  }

  private:
    string name;
    string address;
    string email;
    string shippingInfo;
    ShoppingCart shoppingCart;
    Order order;
};