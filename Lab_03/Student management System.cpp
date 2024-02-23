#include <iostream>
#include <vector>
#include <string>
#include <climits>
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

int numberValidationChoice(int number)
{
    bool validInput = false;
    while (!validInput)
    {
        if (cin >> number)
        {
            if (number < 0 || number > 5)
            {
                cout << "Enter Valid choice: " << endl;
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

int numberValidation2(int a,int number)
{
    bool validInput = false;
    while (!validInput)
    {
        if (cin >> a)
        {
            if (a < 1)
            {
                cout << "Enter positive number: " << endl;
            }else if(a > number){
                cout << "Please Enter Valid Student Number" << endl;
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
    return a;
}



class Student{
    string name;
    double cgpa;
    int rollNo;
    int noOfTest;
    int *tests;
    double averag;

    public:

    Student(){
        name = "";
        cgpa = 0.0;
        rollNo = 0;
        noOfTest = 0;
        tests = nullptr;
    }

    // Setters
    void setName(string name){
        this-> name = name;
    }
    void setCgpa(double gpa){
        cgpa = gpa;
    }
    void setRollNo(int rollNo){
        this->rollNo = rollNo;
    }
    void setNoOfTests(int test){
        noOfTest = test;
    }
    void setTest(int no){
        tests = new int[no];
        for(int i = 0; i < no; i++){
            cout << "Enter marks of test" << endl;
            int x;
            cin >> x;
            tests[i] = x;
        }
    }


    // Getters

    string getName()const{
        return name;
    }
    double getCgpa()const{
        return cgpa;
    }
    int getRollNo()const{
        return rollNo;
    }
    int getNoOfTest()const{
        return noOfTest;
    }
    double getAverage()const{
        return averag;
    }

    // Destructor
    ~Student(){
        if(tests != nullptr){
            delete[] tests;
            tests = nullptr;
        }
    }

    void Display(){
        cout << "Name:      " << name << endl;
        cout << "RollNo:    " << rollNo << endl;
        cout << "CGPA:      " << cgpa << endl;
        for(int i = 0; i < noOfTest; i++){
            cout << "Test" << i+1 << " Score is:        " << tests[i] << endl;
        }
        cout << endl;

    }


    double average(){
        double aver = 0;
        double sum = 0;
        for(int i = 0; i < noOfTest; i++){
            sum += tests[i];
        }

        aver = sum / noOfTest;
        return aver;
    }

};

void takeInformation(Student *students, int numOfStudents){
    cout << "Enter Info of Every Student" << endl;

    for(int i = 0; i < numOfStudents; i++){
        cout << "Enter name of Student" << i+1 << endl;
        string name;
        cin >> name;
        students[i].setName(name);
        cout << "Enter Roll No of Student" << i+1 << endl;
        int roll;
        cin >> roll;
        students[i].setRollNo(roll);
        cout << "Enter cgpa of Student" << i+1 << endl;
        double cgpa;
        cin >> cgpa;
        students[i].setCgpa(cgpa);
        cout << "Enter number of tests of Student" << i+1 << endl;
        int noOfTest;
        cin >> noOfTest;
        students[i].setNoOfTests(noOfTest);
        students[i].setTest(noOfTest);
    }

}

void displayOneStudent(Student *students, int numOfStudents){
    int studentNo = numberValidation2(studentNo,numOfStudents);
    students[studentNo-1].Display();
}

void displayAllStudents(Student *students, int numOfStudents){
    for(int i = 0; i < numOfStudents; i++){
        students[i].Display();
    }
}

void findTopper(Student *students, int numOfStudents){
    int maxAvrg = INT_MIN;
    int topper = -1;
    for(int i = 0; i < numOfStudents; i++){
        double avg = students[i].average();
        if(avg > maxAvrg){
            maxAvrg = avg;
            topper = i;
        }
    }

    cout << endl;
    cout << "Info of Topper is" << endl;

    students[topper].Display();

}

int main() {
    cout << "Welcome to Student Management System" << endl;
    int numOfStudents = 0;
    cout << "Enter the number of students: ";
    numOfStudents = numberValidation(numOfStudents);

    Student *students = new Student[numOfStudents];

    int choice = 0;
    while (choice != 5) {
        cout << "\nMain Menu:" << endl;
        cout << "1. Input Information of Students" << endl;
        cout << "2. Display Information of a Specific Student" << endl;
        cout << "3. Display Information of All Students" << endl;
        cout << "4. Display Information of the Topper" << endl;
        cout << "5. Exit Program" << endl;
        cout << "Enter your choice: ";
        choice = numberValidationChoice(choice);

        switch (choice) {
            case 1:
                takeInformation(students, numOfStudents);
                break;
            case 2:
                if (numOfStudents > 0){
                    cout << endl;
                    displayOneStudent(students, numOfStudents);
                }
                else
                    cout << "No student information available. Please input student information first." << endl;
                break;
            case 3:
                if (numOfStudents > 0){
                    cout << endl;
                    displayAllStudents(students, numOfStudents);
                }
                else
                    cout << "No student information available. Please input student information first." << endl;
                break;
            case 4:
                if (numOfStudents > 0)
                    findTopper(students, numOfStudents);
                else
                    cout << "No student information available. Please input student information first." << endl;
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
        }
    }

    delete[] students;
    return 0;
}
