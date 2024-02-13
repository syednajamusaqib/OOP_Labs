#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Possible Classes and entities

class Buyer{
    string vehicleType;
    int price;
    string phoneNo;
    string address;
    string buyerName;

    public:

    // getters and Setters

    string getVehType(){
        return vehicleType;
    }

    int getPrice(){
        return price;
    }

    string getPhoneNo(){
        return phoneNo;
    }

    string getAddress(){
        return address;
    }

    string getBuyerName(){
        return buyerName;
    }

    void setVehicleType(string type){
        vehicleType = type ;
    }

    void setPrice(int price){
        this->price = price;
    }

    void setPhoneNo(string phone){
        phoneNo = phone;
    }

    void setAddress(string address){
        this->address = address;
    }

    void setBuyerName(string name){
        buyerName = name;
    }


    void BuyerInfo(){
        // Implmentation
    }

    

};



class Records{
    string dateOfRent;
    string vehicleName;
    string vehicleNo;
    string buyer;
    int rentPrice;
    int rentAfterDueDate;

    public:
    string getdateOfRent(){
        return dateOfRent;
    }

    int getrentPrice(){
        return rentPrice;
    }

    int getRentAfterDueDate(){
        return rentAfterDueDate;
    }

    string getvehicleName(){
        return vehicleName;
    }

    string getvehicleNo(){
        return vehicleNo;
    }

    string getbuyer(){
        return buyer;
    }

    void setVehicleType(string date){
        dateOfRent = date ;
    }

    void setPrice(int price){
        rentPrice = price;
    }

    void setPhoneNo(string vehNo){
        vehicleNo = vehNo;
    }

    void setvehicleName(string vehicleName){
        this->vehicleName = vehicleName;
    }

    void setBuyer(string name){
        buyer = name;
    }

    void setPriceAfterRent(int price){
        rentAfterDueDate = price;
    }



};

class Maintenace{
    bool wasMaintained;
    int mainPrice;
    string date;

    public:

    string getDate(){
        return date;
    }

    int getMainPrice(){
        return mainPrice;
    }

    bool getIfMain(){
        return wasMaintained;
    }

    void setDate(string date){
        this->date = date;
    }

    void setMainPrice(int price){
        mainPrice = price;
    }

    void setWasMain(bool flag){
        wasMaintained = flag;
    }


};

class Vehicle{
    int price;
    string model;
    string type;
    int mileage;
    bool isNew;

    public:

    void setPrice(int price){
        this->price = price;
    }

    void setModel(string model){
        this->model = model;
    }
    void setType(string type){
        this->type = type;
    }

    void setMileage(int mile){
        mileage = mile;
    }

    void setIsNew(bool flag){
        isNew = flag;
    }

    int getPrice(){
        return price;
    }

    int getMileage(){
        return mileage;
    }

    bool getIsNew(){
        return isNew;
    }

    string getModel(){
        return model;
    }

    string getType(){
        return type;
    }

    void printVehicleDetails(){
        // Implementation
    }





};

int main() {

              
    return 0;
}