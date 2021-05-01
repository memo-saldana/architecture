#pragma once
#include <string>
using namespace std;

class OrderDetails{
    public:
    OrderDetails(){
      orderId = 0;
      productId = 0;
      productName = "";
      quantity = 0;
      unitCost = 0.0;
      subtotal = 0.0;
    }
    OrderDetails(int orderId, int productId, string productName, int quantity, int unitCost, int subtotal){
      this->productId =productId;
      this->orderId =orderId;
      this->productName =productName;
      this->quantity =quantity;
      this->unitCost =unitCost;
      this->subtotal =subtotal;
    }
    // getters
    int getOrderId(){
      return orderId;
    }
    int getProductId(){
      return productId;
    }
    string getProductName(){
      return productName;
    }
    int getQuantity(){
      return quantity;
    }
    float getUnitCost(){
      return unitCost;
    }
    float getSubtotal(){
      return subtotal;
    }
    // setters
    void setOrderId(int orderId){
      orderId = orderId;
    }
    void setProductId(int productId){
      this->productId = productId;
    }
    void setProductName(string productName){
      this->productName = productName;
    }
    void setQuantity(int quantity){
      this->quantity = quantity;
    }
    void setUnitCost(float unitCost){
      this->unitCost = unitCost;
    }
    void setSubtotal(float subtotal){
      this->subtotal = subtotal;
    }
    long calcPrice(){
      // calculate price
      return 0.0;
    }

  private:
    int orderId;
    int productId;
    string productName;
    int quantity;
    float unitCost;
    float subtotal;
};