#include<iostream>
using namespace std;
int main(){
    cout << "Rifah" << endl;
    cout << "Zakiah" << endl;
    // endl works is the indicator of new line: See the change in the outputs:- 
    cout << "Rifah" ;
    cout << "Zakiah" << endl;
    // '\n' can also be used to indicate new line
    cout << "Rifah\n" ;
    cout << "Zakiah" << endl;
    // Strings can be saved in variables:
    string name = "Rifah Zakiah";
    cout << name << endl;
    cout << name.length() << endl; // string length function
    cout << name[1] << endl; //Accessing individual charactrs in c.
    //Modifying soecific character sinside the string:
    name[0] = 'r'; // R --> r
    cout << name << endl;
    //To find a specific charactr or string inside a string:
    cout << name.find('h', 0) << endl;
    cout << name.find('h', 5) << endl;
    //substring:
    cout << name.substr(8, 3) << endl;
    string namesub;
    namesub = name.substr(6, 3);
    cout << namesub << endl;
    //empty():
    string nom;
    cout << "Enter your name: \n";
    getline(cin, nom);
    if (nom.empty())
    {
        cout << "You haven't entered your name. \n";
    }else
    {
        cout << "Hello " << nom << endl;
    }
    //find(): find the position of a char in the string:
    cout << nom.find('f') << endl;
    //erase():
    nom.erase(0,2);
    cout << "Hello " << nom << endl;
    //append():
    nom.append("@gmail.com");
    cout << "Your user name is now " << nom << endl;
    //at(): return the char at the given position of the string:
    cout << nom.at(6) << endl;
    //clear():
    cout << "Enter your name: \n";
    getline(cin, nom);
    //insert(): 
    nom.insert(0, "@");//inserts @ in the 0th index of the name.
    cout << nom << endl;
    nom.clear();
    cout << "Hello " << nom << endl;//No name will appear since it is cleared.
    
    return 0;
}