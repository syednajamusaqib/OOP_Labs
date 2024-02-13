#include <iostream>
#include <vector>
#include <string>
using namespace std;

class BankAccount{
    int accountNumber;
    string accountName;
    int accountBalance;
    public:
    // Getters
    int getAccountNo(){
        return accountNumber;
    }

    string getName(){
        return accountName;
    }

    int getBalance(){
        return accountBalance;
    }

    // Setters

    void setAccountNo(int accNo){
        accountNumber = accNo;
    }

    void setName(string name){
        accountName = name;
    }

    void setbalance(int balance){
        accountBalance = balance;
    }

    // Function to deposit money
    void depositMoney(int money){
        accountBalance += money;
    }

    // Function to withdraw money

    void withdrawMoney(int money){
        if(cin >> money){
        if(accountBalance - money < 0){
            cout << "Amount is invalid" << endl;
        }else{
            // HBL.withdrawMoney(withMoney);
            accountBalance -= money;
        }
    }
    }

    void printDetails(){
        cout << "Account Details are :" << endl;
        cout << "Account Number is " << accountNumber << endl;
        cout << "Account Name is " << accountName << endl;
        cout << "Account balance is " << accountBalance << endl;
    }
};

int main() {

    BankAccount HBL;

    HBL.setAccountNo(3242);
    HBL.setName("Najam");
    HBL.setbalance(56888);

    cout << "Before depositing and Withdrawing" << endl;

    HBL.printDetails();


    HBL.depositMoney(4112);

    cout << "After Depositing" << endl;

    HBL.printDetails();

    int withMoney;

    cout << "Enter Amount to WithDraw" << endl;

    HBL.withdrawMoney(withMoney);
    

    cout << "After Withdrawing " << endl;


    HBL.printDetails();


    
    
              
    return 0;
}