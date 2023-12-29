#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4};//initialized array
    cout << arr[0] << endl;
    arr[0] = 0; // modifies the value in index 0;
    cout << arr[0] << endl;
    int num[20];
    num[10] = 100;
    cout << num[10] << endl;

    return 0;
}