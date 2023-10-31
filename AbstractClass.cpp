#include<iostream>
using namespace std;

class Base{
    public:
    int x;

    
    virtual void fun() = 0;

    void getX(int a){
        x = a;
    }
};

class Derived:public Base{
    int y;

    public:

    void fun(){
        cout<<" fun() called by Drived."<<endl;
    }
    void putX(){
        cout<<x<<endl;
    }
};

int main(){
    Derived d;

    d.getX(10);
}