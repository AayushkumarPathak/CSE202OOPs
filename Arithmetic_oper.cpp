#include<iostream>
using namespace std;

class Arithmetic{
    int x,y;

    public:
    void getData(){
        cout<<"Enter x and y: ";
        cin>>x>>y;

    }
    void sum(){
        cout<<"Sum is: "<<x+y<<endl;
    }
    void sub(){
        cout<<"Substration is: "<<x-y<<endl;

    }
    void divide(){
        cout<<"Divison is:"<<x/y<<endl;
    }
    void mul(){
        cout<<"Multiplication is: "<<x*y<<endl;
    }
    void mod(){
        cout<<"Modulus is: "<<x%y<<endl;
    }
};

int main(){
    Arithmetic cal;
    cal.getData();
    cal.sum();
    cal.sub();
    cal.mul();
    cal.divide();
    cal.mod();
    
    
    return 0;
}