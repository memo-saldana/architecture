#pragma once
#include <string>
using namespace std;

class ShippingInfo{
  public:
    // constructors
    ShippingInfo(){
      this->shippingId = 0;
      this->shippingType = "";
      this->shippingCost = 0;
      this->shippingRegionId = 0;
    }
    ShippingInfo(int shippingId, string shippingType, int shippingCost, int shippingRegionId){
      this->shippingId = 0;
      this->shippingType = "";
      this->shippingCost = 0;
      this->shippingRegionId = 0;
    }
    // getters
    int getShippingId(){
      return shippingId;
    }
    int getShippingRegion(){
      return shippingRegionId;
    }
    int getShippingCost(){
      return shippingCost;
    }
    string getShippingType(){
      return shippingType;
    }
    // setters
    void setShippingId(int shippingId){
      this->shippingId = shippingId;
    }
    void setShippingRegion(int shippingRegion){
      this->shippingRegionId = shippingRegion;
    }
    void setShippingCost(int shippingCost){
      this->shippingCost = shippingCost;
    }
    void setShippingType(string shippingtype){
      this->shippingType = shippingType;
    }
    void updateShippingInfo(){
      // updates shipping info
    }
  private:
    int shippingId;
    string shippingType;
    int shippingCost;
    int shippingRegionId;

};