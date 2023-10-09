#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// operator Overloading using friend function
class Space{
    private:
    int x,y,z;

    public:
    Space(int a, int b, int c){
        x = a;
        y = b;
        z = c;
    }
    void display(){
        cout<<"x : "<<x<<endl;
        cout<<"y : "<<y<<endl;
        cout<<"z : "<<z<<endl;
    }
    friend void operator -(Space &s); // declaration
};

void operator -(Space &s){ //defination
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}

int main(){
    Space s(10,-20,30);
    cout<<"----     S   ----"<<endl;
    s.display();

    -s;
    cout<<"----     S   ----"<<endl;
    s.display();

}