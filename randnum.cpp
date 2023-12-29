//Generating random numbers:
#include<iostream>
#include<ctime>
using namespace std;

int main(){
    srand(time(NULL));
    //rand(): generates random number; range = 0 - 32767.
    int n1 = (rand() % 6) + 1;//This will display the nums 1 - 6, which are the outputs of a dice.
    int n2 = (rand() % 6) + 1;
    int n3 = (rand() % 6) + 1;
//A random dice game cam be made through this.

    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
//random event generator through switch:
    int rn = (rand() % 5) + 1;

    switch (rn)
    {
    case 1:
        cout << "You win a car!!" << endl;
        break;
    case 2:
        cout << "You win a concert ticket!!" << endl;
        break;
    case 3:
        cout << "You win a free lunch!!" << endl;
        break;
    case 4:
        cout << "You win a cardigan!!" << endl;
        break;
    case 5:
        cout << "You win a t-shirt!!" << endl;
        break;
    
    }

    return 0;
}