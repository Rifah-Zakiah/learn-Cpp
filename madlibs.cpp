#include<iostream>
using namespace std;

int main(){
    string clr, pln, clb;
    cout << "Enter a colour: " << endl;
    getline(cin, clr);
    cout << "Enter a plural noun: " << endl;
    getline(cin, pln);
    cout << "Enter a celebrity: " << endl;
    getline(cin, clb);

    cout << "Roses are " << clr << endl;
    cout << pln << " are blue." << endl;
    cout << "I love " << clb <<  endl;

    return 0;
}