#include<iostream>
using namespace std;

class Chef{//Super class
    public:
    void mkChiken(){
        cout << "The chef makes chicken." << endl;
    }
    void mkSalad(){
        cout << "The chef makes salad." << endl;
    }
    void mkSpdish(){//overwriting
        cout << "The chef makes bbq ribs." << endl;
    }
};

class ItlChef : public Chef{//Sub class since it is inheriting??
    public:
    void mkPasta(){
        cout << "The chef makes pasta." << endl;
    }
    void mkPizza(){
        cout << "The chef makes pizza." << endl;
    }void mkSpdish(){
        cout << "The chef makes chicken parm." << endl;
    }
};

int main(){
    Chef chef;
    chef.mkChiken();
    chef.mkSpdish();

    ItlChef itlchef;
    itlchef.mkPasta();
    itlchef.mkSalad();
    itlchef.mkSpdish();

    return 0;
}