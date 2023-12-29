#include<iostream>
using namespace std;
string getDay(int dayNum){
    string dayName;
    switch (dayNum)
    {
    case 1:
        dayName = "Sunday";
        break;
    case 2:
        dayName = "Monday";
        break;
    case 3:
        dayName = "Tuesday";
        break;
    case 4:
        dayName = "Wednesday";
        break; 
    case 5:
        dayName = "Thursday";
        break; 
    case 6:
        dayName = "Friday";
        break; 
    case 7:
        dayName = "Saturday";
        break; 
    default:
        dayName = "Not a valid day number";
        break;
    }

    return dayName;
}
int main(){
    cout << getDay(1);
    
    return 0;
}