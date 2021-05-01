#pragma once
#include <ctime>
#include <string>
using namespace std;

class ShoppingCart{
  public:
    ShoppingCart(){
    cartId = 0;
    productID = 0;
    quantity = 0;
    dateAdded = time(0);
  }
  ShoppingCart(int cartId, int productID, int quantity, time_t dateAdded){
    this -> cartId = cartId;
    this -> productID = productID;
    this -> quantity = quantity;
    this -> dateAdded = dateAdded;
  }
  // getters
  int getCartID(){
    return cartId;
  }
  int getProductID(){
    return productID;
  }
  int getQuantity(){
    return quantity;
  }
  time_t getDateAdded(){
    return dateAdded;
  }
  // setters
  void setCartID(int cartId){
    this->cartId = cartId;
  }
  void setProductID(int productID){
    this->productID = productID;
  }
  void setQuantity(int quantity){
    this->quantity = quantity;
  }
  void setTimeAdded(time_t dateAdded){
    this->dateAdded = dateAdded;
  }
  void addCartItem(int item){
    // adds item
  }

  private:
    int cartId;
    int productID;
    int quantity;
    time_t dateAdded;
  protected:

};