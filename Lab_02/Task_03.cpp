#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Car{
    int yearModel;
    string make;
    int speed;
    public:

    Car(int yearModel, string make, int speed = 0){
        this -> yearModel = yearModel;
        this -> make = make;
    }


    void setYearModel(int yearModel){
        this -> yearModel = yearModel;
    }
    void setMake(string make){
        this -> make = make;
    }

    void setSpeed(int speed){
        this -> speed = speed;
    }

    int getYearModel()const{
        return yearModel;
    }
    string getMake()const{
        return make;
    }
    int getSpeed()const{
        return speed;
    }

    void accelerate(){
        speed += 5;
    }

    void brake(){
        speed -= 5;
    }
};

int main() {

    Car *Honda = new Car(2015,"Honda");

    for(int i = 0; i < 5; i++){
        (*Honda).accelerate();
        cout << "Speed of Car is " << Honda->getSpeed() << endl;
    }
    for(int i = 0; i < 5; i++){
        Honda->brake();
        cout << "Speed of Car is " << Honda->getSpeed() << endl;
    }


    delete Honda;
    
              
    return 0;
}