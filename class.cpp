#include<iostream>
using namespace std;
class Book //kind of like structure from C but with many moe attributes
{
public:
    string title;
    string author;
    int pages;
    Book(){ //A "Constructor" tells how many objests are created; especial type of function
        cout << "Object created" << endl;
    }
};



int main(){
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;
    cout << book1.author;

    return 0;
}