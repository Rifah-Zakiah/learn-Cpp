#include<iostream>
#include<cmath> //contains math functions
using namespace std;

int main(){
    cout << 12 << endl;
    cout << 8 - 13 << endl;
    cout << 40 / 13 << endl;//returns integer value
    cout << 40.0 / 13 << endl;//since this is between a decimal number and an integer number, this will return decimal result
    // A few functions from cmath:(in the arguments of all these functions, both decimal & int numbers can be used)
    cout << sqrt(36) << endl;
    cout << pow(2, 5) << endl;
    cout << round(4.3) << endl;
    cout << round(4.6) << endl;
    cout << round(4.5) << endl;
    cout << ceil(4.3) << endl;//roundsUP
    cout << floor(4.8) << endl;//roundsDOWN
    cout << fmax(2, 11) << endl;// returns the bigger number
    cout << fmin(7, 99) << endl;// returns the smaller number
    //basic calculator:
    int a, b;
    cout << "Enter first numder: " << endl;
    cin >> a;
    cout << "Enter second numder: " << endl;
    cin >> b;
    
    cout << "Summation of the 2 numbers: " << a + b << endl;
    cout << "Difference between the 2 numbers: " << a - b << endl;
    cout << "Product of the 2 numbers: " << a * b << endl; 

    return 0;
}