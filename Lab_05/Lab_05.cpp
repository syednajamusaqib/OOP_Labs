#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int numberValidationInd(int index, int size)
{
    bool validInput = false;
    while (!validInput)
    {
        if (cin >> index)
        {
            if(index < 0 || index >= size){
                cout << "Enter Valid Index" << endl;
            }else{
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
    return index;
}

int numberValidation(int number)
{
    bool validInput = false;
    while (!validInput)
    {
        if (cin >> number)
        {
            if (number < 0)
            {
                cout << "Enter positive number: " << endl;
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

int numberValidationArray(int number)
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

void reversed(int i, int j, int *arr){
        while(i < j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
}

class IntArray{
    int *arr;
    int size;
    public:
    IntArray(){
        size = 0;
        arr = nullptr;
    }

    IntArray(int size){
        this->size = size;
        arr = new int[size];
    }
    IntArray(IntArray & obj){
        size = obj.size;
        arr = new int[size];

        for(int i = 0; i < size; i++){
            arr[i] = obj.arr[i];
        }
    }

    // Getters and Setters
    int getSize()const{
        return size;
    }

    int* getArr()const{
        return arr;
    }

    void setSize(int size){
        this->size = size;
    }

    void setArr(int value, int index){
        arr[index] = value;
    }

    void inputValues(){
        cout << "Enter Elements of Array: " << endl;
        for(int i = 0; i < size; i++){
            arr[i] = numberValidationArray(arr[i]);
        }
    }

    void display()const{
        // cout << "Array data is:   " << endl;
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~IntArray(){
        // cout << "Destructor Called" << endl;
        if(arr != nullptr){
            delete[] arr;
            arr = nullptr;
        }
    }

    IntArray addArray(const IntArray & obj)const{
        if(size != obj.size){
            cout << "Size must be same to Add arrays" << endl;
            IntArray arr(0);
            return arr;
        }
            IntArray temp(size);
            for(int i = 0; i < size; i++){
                temp.arr[i] = arr[i] + obj.arr[i];
            }
            return temp;
    }

    IntArray subArray(const IntArray & obj)const{
        if(size != obj.size){
            cout << "Size must be same to Subtract arrays" << endl;
            IntArray arr(0);
            return arr;
        }
            IntArray temp(size);
            for(int i = 0; i < size; i++){
                temp.arr[i] = arr[i] - obj.arr[i];
            }
            return temp;
    }

    IntArray mulArray(const IntArray & obj)const{
        if(size != obj.size){
            cout << "Size must be same to Multiply arrays" << endl;
            IntArray arr(0);
            return arr;
        }
            IntArray temp(size);
            for(int i = 0; i < size; i++){
                temp.arr[i] = arr[i] * obj.arr[i];
            }
            return temp;
    }

    bool palindrome()const{
        int i = 0; 
        int j = size - 1;

        while(i <= j){
            if(arr[i] != arr[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    IntArray reverse()const{
        IntArray obj(size);
        for(int i = 0; i < size; i++){
            obj.arr[i] = arr[i];
        }
        int i = 0;
        int j = size - 1;

        while(i < j){
            swap(obj.arr[i],obj.arr[j]);
            i++;
            j--;
        }

        return obj;
    }


    IntArray cyclicRotate(int n)const{
        IntArray obj(size);
        for(int i = 0; i < size; i++){
            obj.arr[i] = arr[i];
        }
        int rot = n % obj.size;

        // Reverse 
        reversed(0,size-1,obj.arr);
        reversed(0,rot-1,obj.arr);
        reversed(rot,size-1,obj.arr);

        return obj;

    }


};


int main() {
    int choice;

    do {
        cout << "-------------------------------------------------------\n";
        cout << "\nMenu\n";
        cout << "1. Add Array\n";
        cout << "2. Subtract Array\n";
        cout << "3. Multiply Array\n";
        cout << "4. Reverse Array\n";
        cout << "5. Rotate Array\n";
        cout << "6. Check Palindrome\n";
        cout << "7. Exit\n";
        cout << "-------------------------------------------------------\n";
        cout << "Enter your choice: ";
        choice = numberValidation(choice);
        cin.ignore(); // Ignore the newline character left by cin
        
        switch(choice){
            case 1:{
                cout << "Enter Size of First Array: ";
                int size = numberValidation(size);
                IntArray arr1(size);
                arr1.inputValues();
                cout << "Enter Size of Second Array: ";
                int size2 = numberValidation(size2);
                IntArray arr2(size2);
                arr2.inputValues();
                IntArray arr3 = arr1.addArray(arr2);
                cout << "After Adding both Arrays: "<< endl;
                arr3.display();
                break;
            }
            case 2:{
                cout << "Enter Size of First Array: ";
                int size = numberValidation(size);
                IntArray arr1(size);
                arr1.inputValues();
                cout << "Enter Size of Second Array: ";
                int size2 = numberValidation(size2);
                IntArray arr2(size2);
                arr2.inputValues();

                IntArray arr3 = arr1.subArray(arr2);
                cout << "After Subtracting both Arrays: "<< endl;
                arr3.display();
                break;
            }
            case 3:{
                cout << "Enter Size of First Array: ";
                int size = numberValidation(size);
                IntArray arr1(size);
                arr1.inputValues();
                cout << "Enter Size of Second Array: ";
                int size2 = numberValidation(size2);
                IntArray arr2(size2);
                arr2.inputValues();

                IntArray arr3 = arr1.mulArray(arr2);
                cout << "After Multiplying both Arrays: "<< endl;
                arr3.display();
                break;
            }
            case 4:{
                cout << "Enter Size of Array: ";
                int size = numberValidation(size);
                IntArray arr1(size);
                arr1.inputValues();
                IntArray arr2 = arr1.reverse();
                cout << "Array After Reversal: " << endl;
                arr2.display();
                break;
            }
            case 5:{
                cout << "Enter Size of Array: ";
                int size = numberValidation(size);
                IntArray arr1(size);
                arr1.inputValues();
                cout << "Enter degree of rotation: ";
                int rot = numberValidation(rot);
                IntArray arr2 = arr1.cyclicRotate(rot);
                cout << "Array After Rotation: " << endl;
                arr2.display();
                break;
            }
            case 6:{
                cout << "Enter Size of Array: ";
                int size = numberValidation(size);
                IntArray arr1(size);
                arr1.inputValues();
                if(arr1.palindrome()){
                    cout << "Given Array is Palindrome" << endl;
                }else{
                    cout << "Given Array is not Palindrome" << endl;
                }
            }
        }
    }while(choice != 7);
    
    return 0;
}
