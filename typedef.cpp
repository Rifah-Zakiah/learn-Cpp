#include<iostream>

typedef std::string text_t;//setting another name to the type 'string'.
//this same task can be done with 'using'
using number_t = int;//another name of int is set to number_t

int main(){
    //typedef = reserved keyword to create additional name foe another existing datatype.
    //using = to create type alias. Works like typedef. More used recently.

    text_t name = "Rifah";
    std::cout << name << '\n';

    number_t age = 14;
    std::cout << age << '\n';

    return 0;
}