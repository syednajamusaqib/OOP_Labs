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
            if (number < 0 || number > 7)
            {
                cout << "Enter Valid Choice: " << endl;
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


int numberValidationIma(int number)
{
    bool validInput = false;
    while (!validInput)
    {
        if (cin >> number)
        {
            validInput = true;
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

using namespace std;

class Complex{
    double real;
    double imaginary;
    public:
    double getReal(){
        return real;
    }
    double getImag(){
        return imaginary;
    }
    Complex(){
        real = 0;
        imaginary = 0;
    }

    Complex(double r){
        real = r;
        imaginary = 0;
    }

    Complex(double r, double i){
        real = r;
        imaginary = i;
    }

    Complex(const Complex& c){
        real = c.real;
        imaginary = c.imaginary;
    }

    Complex add(Complex c){
        double realNo = c.real + real;
        double imaginaryNo = c.imaginary + imaginary;

        Complex obj(realNo,imaginaryNo);

        return obj;
    }

    Complex subtract(Complex c){
        double realNo = real - c.real;
        double imaginaryNo = imaginary - c.imaginary;

        Complex obj(realNo,imaginaryNo);

        return obj;
    }

    Complex multiply(Complex c){
        double realNo = (real * c.real) - (imaginary * c.imaginary);
        double imaginaryNo = (real * c.imaginary) + (c.real * imaginary);

        Complex obj(realNo,imaginaryNo);

        return obj;
    }

    Complex divide(Complex c){

        double denom = (c.real * c.real) + (c.imaginary * c.imaginary);
        // cout << denom << endl;
        double realN = (real * c.real) + ((imaginary * c.imaginary));

        // cout << realN << endl;

        double imagN = -((real * c.imaginary) - (c.real * imaginary));

        // cout << imagN << endl;

        if(denom == 0){
            cout << "Division by zero Occured" << endl;
            Complex obj(0,0);
            return obj;
        }

        double realNo = realN / denom;
        // cout << realNo << endl;
        
        double imagNo = imagN / denom;
        // cout << imagNo << endl;
        Complex obj(realNo,imagNo);
        return obj;
    }

    Complex conjugate(Complex c){
        double r = c.real;
        double imag = -1 * c.imaginary;
        Complex obj(r,imag);
        return obj;
    }

    void print()
    {
        
        cout << "Complex number is : " << real << " + " << "(" << (imaginary) << ")" << "i" << endl;
    }

};

int main() {

    int choice;
    do{
        cout << "---------------------------------" << endl;
        cout << "Menu" << endl;
        cout << "1. Add Complex Numbers" << endl;
        cout << "2. Subtract Complex Numbers" << endl;
        cout << "3. Multiply Complex Numbers" << endl;
        cout << "4. Divide Complex Numbers" << endl;
        cout << "5. Conjugate of  Complex Numbers" << endl;
        cout << "6. Show" << endl;
        cout << "7. Exit" << endl;
        cout << "---------------------------------" << endl;
        cout << "Enter Choice:";
        choice = numberValidation(choice);
        switch(choice){
            case 1:{
                cout << "Enter real number for object 1" << endl;
                double real = numberValidationIma(real);
                cout << "Enter imag number for object 1" << endl;
                double imag = numberValidationIma(imag);
                Complex a(real,imag);
                cout << "Enter real number for object 2" << endl;
                double real1 = numberValidationIma(real1);
                cout << "Enter imag number for object 2" << endl;
                double imag1 = numberValidationIma(imag1);
                Complex b(real1,imag1);
                Complex c = a.add(b);
                c.print();
                break;
            }
            case 2:{
                cout << "Enter real number for object 1" << endl;
                double real = numberValidationIma(real);
                cout << "Enter imag number for object 1" << endl;
                double imag = numberValidationIma(imag);
                Complex a(real,imag);
                cout << "Enter real number for object 2" << endl;
                double real1 = numberValidationIma(real1);
                cout << "Enter imag number for object 2" << endl;
                double imag1 = numberValidationIma(imag1);
                Complex b(real1,imag1);
                Complex c = a.subtract(b);
                c.print();
                break;
            }
            case 3:{
                cout << "Enter real number for object 1" << endl;
                double real = numberValidationIma(real);
                cout << "Enter imag number for object 1" << endl;
                double imag = numberValidationIma(imag);
                Complex a(real,imag);
                cout << "Enter real number for object 2" << endl;
                double real1 = numberValidationIma(real1);
                cout << "Enter imag number for object 2" << endl;
                double imag1 = numberValidationIma(imag1);
                Complex b(real1,imag1);
                Complex c = a.multiply(b);
                c.print();
                break;
            }
            case 4:{
                cout << "Enter real number for object 1" << endl;
                double real = numberValidationIma(real);
                cout << "Enter imag number for object 1" << endl;
                double imag = numberValidationIma(imag);
                Complex a(real,imag);
                cout << "Enter real number for object 2" << endl;
                double real1 = numberValidationIma(real1);
                cout << "Enter imag number for object 2" << endl;
                double imag1 = numberValidationIma(imag1);
                Complex b(real1,imag1);
                Complex c = a.divide(b);
                c.print();
                break;
            }
            case 5:{
                cout << "Enter real number for object 1" << endl;
                double real = numberValidationIma(real);
                cout << "Enter imag number for object 1" << endl;
                double imag = numberValidationIma(imag);
                Complex a(real,imag);
                cout << "Enter real number for object 2" << endl;
                double real1 = numberValidationIma(real1);
                cout << "Enter imag number for object 2" << endl;
                double imag1 = numberValidationIma(imag1);
                Complex b(real1,imag1);
                Complex c = a.conjugate(b);
                cout << "Conjugate is " << endl;
                c.print();
                break;
            }
            case 6:{
                cout << "Enter real number for object 1" << endl;
                double real = numberValidationIma(real);
                cout << "Enter imag number for object 1" << endl;
                double imag = numberValidationIma(imag);
                Complex a(real,imag);
                a.print();
                break;
            }
            case 7:
                cout << "Exiting Program..." << endl;
                cout << "Program Exited Successfully" << endl;
                break;
        }
    }while(choice != 7);

    
    return 0;
}
