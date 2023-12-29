#include<iostream>
#include<cmath>//includes various mathematical function
using namespace std;

int main(){
    int x = 3, y = 4;
    //max() & min() exists in iostream
    cout << max(x, y) << endl;
    cout << min(x, y) << endl;
    cout << pow(2, 3) << endl;//2^3
    cout << sqrt(49) << endl;
    cout << abs(-3) << endl;
    cout << round(5.14) << endl;
    cout << round(5.54) << endl;
    cout << ceil(7.22) << endl;//round-UP
    cout << floor(7.92) << endl;//round-DOWN

    return 0;
}