#include<iostream>
using namespace std;

int getMax(int a, int b, int c){
    int max;
    if (a >= b && a >= c)
    {
        max = a;
    }else if (b >= a && b >= c)
    {
        max = b;
    }else
    {
        max =c;
    } 

}

int main(){
    bool isMale = false;
    bool isTall = true;
    if (isMale)
    {
        cout << "You are male" << endl;
    }
    else if (isMale || isTall)
    {
        cout << "You are male or tall" << endl;
    }
    
    else
    {
        cout << "You are not male." << endl;
    }
    
    cout << getMax(5, 8, 2);

    return 0;
}