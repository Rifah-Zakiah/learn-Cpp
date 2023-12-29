#include<iostream>
using namespace std;
void sayHi(string name, int age);
int cube(int n){
    return n*n*n;
}
string concat(string str1, string str2);
//The cake() functions are called overloaded functions, they share the same name but different parameters.
void cake();
void cake(string str1);
void cake(string str1, string str2);

int main(){
    sayHi("Nona", 99);
    sayHi("Halo", 78);
    int ans = cube(9);
    cout << ans << endl;
    cout << cube(4) << endl;
    cout << concat("Rif", "Rif") << endl;
    cake();
    cake("chocolate");
    cake("vanilla","fruit");

    return 0;
}
void sayHi(string name, int age){
    cout << "Hello " << name << " you are " << age << endl;
}
string concat(string str1, string str2){
    return str1 + str2;
}
void cake(){
    cout << "I baked a cake." << endl;
}
void cake(string str1){
    cout << "I baked a " << str1 << " cake." << endl;
}
void cake(string str1, string str2){
    cout << "I baked a " << str1 << " and " << str2 << " cake." << endl;
}