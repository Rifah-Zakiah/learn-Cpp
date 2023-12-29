#include<iostream>
using namespace std;
class Movie
{
private:
    string rating;//Hiding rating so that its value can be SETTED.
public:
    string name;
    string dir;
    Movie(string aName, string aDir, string aRating){
        name = aName;
        dir = aDir;
        setRating(aRating);
    }

    void setRating(string aRating){//Setting the value of rating
        if (aRating == "PG" || aRating == "PG-13" || aRating == "G" || aRating == "PG-18" || aRating == "R")
        {
            rating = aRating;
        }else
        {
            rating = "NR";
        }
    }

    string getRating(){//printing the value of rating
        return rating;
    }

};


int main(){
    Movie tnt("Tenet", "Christopher Nolan", "PG-13");

    cout << tnt.getRating();/*direct rating cannot be called in the main function as it is private
    to the class Movie*/

    return 0;
}