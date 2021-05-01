#pragma once

#include <ctime>
#include "OrderDetails.h"
#include "ShippingInfo.h"

class Order{
  public:
    Order(){
      orderId = 0;
      dateCreated = time(0);
      dateShipped = time(0);
      status = "";
      orderDetails = OrderDetails();
      shippingInfo = ShippingInfo();
    }
    Order(int orderId, time_t dateCreated, time_t dateShipped, string status, OrderDetails orderDetails, ShippingInfo shippingInfo){
      this->orderId = orderId;
      this->dateCreated = dateCreated;
      this->dateShipped = dateShipped;
      this->status = status;
      this->orderDetails = orderDetails;
      this->shippingInfo = shippingInfo;
    }
    // setters
    int getOrderId(){
      return orderId;
    }
    time_t getDateCreated(){
      return dateCreated;
    }
    time_t getDateShipped(){
      return dateShipped;
    }
    string getStatus(){
      return status;
    }
    // getters
    void setOrderId(int orderId){
      this->orderId = orderId;
    }
    void setDateCreated(time_t dateCreated){
      this->dateCreated = dateCreated;
    }
    void setDateShipped(time_t dateShipped){
      this->dateShipped = dateShipped;
    }
    void setStatus(string status){
      this->status = status;
    }
    void placeOrder(time_t date){
      // places order
    }

  private:
    int orderId;
    time_t dateCreated;
    time_t dateShipped;
    string status;
    OrderDetails orderDetails;
    ShippingInfo shippingInfo;
};