// ****** Program to overload + (addition) operator,  Binary Operator *******
#include<iostream>
using namespace std;


class Sum{
    public:
    int b,a;

    Sum(){
        b = 50;
    }
    void setData(){
        cout<<"Enter a: ";
        cin>>a;
    }
    friend int operator +(Sum s1);
   
    
};

int operator +(Sum s1){
        return(a+s1.b);
    }

int main(){
    int d;
    Sum s,t;
    s.setData();
    d = s + t; // t has going for s1 object member. 

    cout<<"Sum is: "<<d;
    return 0;
}
