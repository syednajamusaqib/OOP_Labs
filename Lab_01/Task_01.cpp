#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student{
    int rollNo;
    string name;
    string address;
    string phoneNo;
    char grade;

    public:
    // Getters
    int getRollNo(){
        return rollNo;
    }

    string getName(){
        return name;
    }

    string getAddress(){
        return address;
    }

    string getPhoneNo(){
        return phoneNo;
    }

    char getGrade(){
        return grade;
    }

    //Setters

    void setRollNo(int rollNumber){
        rollNo = rollNumber;
    }

    void setName(string Name){
        name = Name;
    }

    void setAddress(string adrs){
        address = adrs;
    }

    void setPhoneNo(string phone){
        phoneNo = phone;
    }

    void setGrade(char grd){
        grade = grd;
    }

    void printDetails(){
        cout << "Details of students are " << endl;
        cout << "Roll Number of Student is " << rollNo << endl;
        cout << "Name of Student is " << name << endl;
        cout << "Address of Student is " << address << endl;
        cout << "Phone Number of Student is " << phoneNo << endl;
        cout << "Grade of Student is " << grade << endl;
    }
};

int main() {
    Student Najam;

    Najam.setRollNo(15);
    Najam.setAddress("Multan Road Lahore");
    Najam.setName("Syed Najam U Saqib");
    Najam.setPhoneNo("+92 3100000000");
    Najam.setGrade('A');


    Najam.printDetails();


    return 0;
}