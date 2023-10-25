#include<iostream>
using namespace std;

class ABC{
    public:

    ABC(){
        cout<<"Base class constructer called."<<endl;
    }
    ~ ABC(){
        cout<<"Base class destructor called."<<endl;
    }
};

class XYZ:ABC{
    public:
    XYZ(){
        cout<<"Derived class constructer called."<<endl;
    }
    ~ XYZ(){
        cout<<"Derived class destructor called."<<endl;
    }


};

int main(){
    XYZ m;
    return 0;
}