#include<iostream>
using namespace std;
class Book //kind of like structure from C but with many moe attributes
{
public:
    string title;
    string author;
    int pages;
    Book(string name){ 
        cout << name << endl;
    }
    //Multiple constructor can be created:
    Book(){
        title = "No title";
        author = "No author";
        pages = 0;
    }
};
class Address {
    public: 
    string city;
    string town;
    int roadNum;
//Constructor to cosize the inputs;
    Address(string aCity, string aTown, int aRoadNum){
       city = aCity;
       town = aTown;
       roadNum = aRoadNum;
    }
};

int main(){
    Book book1("Harry Potter");
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;
    Book book3;
    cout << book3.title << endl;
    Address add1("Dhaka", "Uttara", 22);//One line instead of 3. 
    cout << add1.town << endl;

    return 0;
}