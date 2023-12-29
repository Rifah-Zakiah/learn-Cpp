#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    string major; 
    float cgpa;
    Student(string aName, string aMajor, float aCgpa){
        name = aName;
        major = aMajor;
        cgpa = aCgpa;
    }
    bool hasHonours(){
        if (cgpa >= 3.5)
        {
            return true;
        }
        return false;
    }
};

int main(){
    Student std1("Jim", "stem", 2.9);
    Student std2("Pam", "Arts", 3.6);
    cout << std1.hasHonours() << endl;//returns false, that is 0.
    cout << std2.hasHonours() << endl;//returns true, that is 1.

    return 0;
}