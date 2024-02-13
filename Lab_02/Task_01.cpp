#include <iostream>
#include <vector>
#include <string>
using namespace std;

int numberValidation(int number)
{
    bool validInput = false;
    while (!validInput)
    {
        if (cin >> number)
        {
            if (number < 0)
            {
                cout << "Enter Valid Size: " << endl;
            }
            else
            {
                validInput = true;
            }
        }
        else
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Invalid input. Please enter a valid number." << endl;
        }
    }
    return number;
}

int numberValidationDay(int number)
{
    bool validInput = false;
    while (!validInput)
    {
        if (cin >> number)
        {
            if (number < 1 || number > 31)
            {
                cout << "Enter valid Day: " << endl;
            }
            else
            {
                validInput = true;
            }
        }
        else
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Invalid input. Please enter a valid number." << endl;
        }
    }
    return number;
}

int numberValidationMonth(int number)
{
    bool validInput = false;
    while (!validInput)
    {
        if (cin >> number)
        {
            if (number < 1 || number > 12)
            {
                cout << "Enter valid Month: " << endl;
            }
            else
            {
                validInput = true;
            }
        }
        else
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Invalid input. Please enter a valid number." << endl;
        }
    }
    return number;
}

int numberValidationYear(int number)
{
    bool validInput = false;
    while (!validInput)
    {
        if (cin >> number)
        {
            if (number < 1000 || number > 2024)
            {
                cout << "Enter valid Year: " << endl;
            }
            else
            {
                validInput = true;
            }
        }
        else
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Invalid input. Please enter a valid number." << endl;
        }
    }
    return number;
}

class Date{
    int day;
    int month;
    int year;
    public:

    void setDay(int day){
        this -> day = day;
    }
    void setMonth(int month){
        this -> month = month;
    }
    void setYear(int year){
        this -> year = year;
    }
    int getDay()const{
        return day;
    }
    int getMonth()const{
        return month;
    }
    int getYear()const{
        return year;
    }

    void displayDate()const{
        cout << day << "/" << month << "/" << year << endl;
    }

};

int main() {

    Date D1[5];


    D1[0].setDay(25);
    D1[0].setMonth(12);
    D1[0].setYear(1876);

    D1[1].setDay(9);
    D1[1].setMonth(11);
    D1[1].setYear(1877);

    D1[2].setDay(21);
    D1[2].setMonth(4);
    D1[2].setYear(1938);

    D1[3].setDay(14);
    D1[3].setMonth(8);
    D1[3].setYear(1947);

    D1[4].setDay(11);
    D1[4].setMonth(9);
    D1[4].setYear(1948);

    for(int i = 0; i < 5; i++){
        cout << "Details of Object " << i+1 << " are" << endl;
        D1[i].displayDate();
    }

    cout << endl << endl;
    

    cout << "Enter Size of array" << endl;
    int size = numberValidation(size);
    
    Date *D2 = new Date[size];
    
    for(int i = 0; i < size; i++){
        cout << "Enter Day of " << "Object" << i+1 <<  endl;
        int day = numberValidationDay(day);
        D2[i].setDay(day);

        cout << "Enter Month of "<< "Object" << i+1 << endl;
        int month = numberValidationMonth(month);
        D2[i].setMonth(month);

        cout << "Enter Year of " <<  "Object" << i+1 << endl;
        int year = numberValidationYear(year);
        D2[i].setYear(year);
    }

    for(int i = 0; i < size; i++){
        cout << "Details of Object " << i+1 << " are" << endl;
        D2[i].displayDate();
    }


    delete[] D2;


    return 0;
}