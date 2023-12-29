#include<iostream>
using namespace std;
int main(){
    int sn = 13, gn = 3, gc = 0, g;
    bool og = false;
    while (sn != g && !og)
    {
        if (gc < gn)
        {
            cout << "Enter number: ";
            cin >> g;
            gc++;
        }else
        {
            og = true;
        } 
    }
    if (og)
    {
        cout << "You Lose!!";
    }else
    {
        cout << "You Win!!";
    }
    
    return 0;
}