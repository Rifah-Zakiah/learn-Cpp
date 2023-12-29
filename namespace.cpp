#include<iostream>

namespace first{
    int x = 1;
    int y = 11;
}
namespace second{
    int x = 2;
    int y = 22;
}

int main(){
    //Namespace = to prevent name conflict. Two or more entities can share the same name.
    int x = 0;//Due to this line the value of x (if not explicitly defined) will have the value 0.
    std :: cout << x << std :: endl;//prints 0, the value in main function.
    std :: cout << first :: x << std :: endl;//prints 1, the value in first namespace
    std :: cout << second :: x << std :: endl;//prints 2, the value in second namespace
    // '::' is called the scope resolution operator.

    using namespace first;
    std :: cout << y << std :: endl;//since we are using first namespace, y will be 11.

    return 0;
}