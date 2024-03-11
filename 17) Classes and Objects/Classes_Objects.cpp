#include <iostream>

using namespace std;

class Book {

    public:
        string title;
        string author;
        int pages;

};

int main(){

    string name = "Kaarthi";
    double pi = 3.1415;
    char favoriteLetter = 'G';

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 450;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    Book book2;
    book2.title = "Percy Jackson";
    book2.author = "Rick Riordin";
    book2.pages = 350;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

}
