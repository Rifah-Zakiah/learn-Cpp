#include<iostream>
using namespace std;
//cout << is insertion operator
//cin >> is extraction operator
int main(){
     //For string:
    string name;
    
    int age;//same for the data types: char, double & float
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Your are " << age << " years old." << endl;
    
    cout << "Enter your name: " << endl;
    getline(cin >> ws, name);//getline() function is used to take input string with spaces
    /*after entering age, we space an 'enter' which gets stored and deemed as the input of name.
    That's why while taking input of name, ws(=white spaces) is added which eliminates the enter.
    Enter is basically a newline character, that's why it occur while taking char/string input.*/
    cout << "Hello " << name << endl;
    
    return 0;
}