#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book{
    string bookTitle;
    string bookAuthor;
    string bookGenre;
    int pubYear;
    int bookPrice;

    public:
    // Getters
    string getTitle(){
        return bookTitle;
    }

    string getAuthor(){
        return bookAuthor;
    }

    string getGenre(){
        return bookGenre;
    }

    int getPubYear(){
        return pubYear;
    }

    int getPrice(){
        return bookPrice;
    }

    // Setters

    void setTitle(string title){
        bookTitle = title;
    }

    void setAuthor(string author){
        bookAuthor = author;
    }

    void setGenre(string genre){
        bookGenre = genre;
    }

    void setPubYear(int year){
        pubYear = year;
    }

    void setPrice(int price){
        bookPrice = price;
    }

    int disPrice(int price){
        return price * 0.1;
    }

    void printDetails(){
        cout << "Book Details are " << endl;
        cout << "Title of book is " << bookTitle << endl;
        cout << "Author of book is " << bookAuthor << endl;
        cout << "Genre of book is " << bookGenre << endl;
        cout << "Publication Year is " << pubYear << endl;
        cout << "Price of book is " << bookPrice << endl;
    }
};

int main() {

    Book MD;

    MD.setTitle("Math Defeciency");
    MD.setAuthor("Charles Darwin");
    MD.setGenre("Adventure");
    MD.setPubYear(2016);
    MD.setPrice(2000);

    int bookPrice = MD.getPrice();
    
    MD.printDetails();  


    cout << "Discount is " << MD.disPrice(bookPrice) << " and Price after discount is "<< bookPrice - MD.disPrice(bookPrice) << endl;

    return 0;
}