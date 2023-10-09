// using member function

#include<iostream>
#include<conio.h>
using namespace std;

class ABC{
    private:
    int x, y, z;

    public:
    ABC(int a, int b , int c){
        x = a;
        y = b;
        z = c;
    }
    void display(){
        cout<<"x : "<<x<<endl;
        cout<<"y : "<<y<<endl;
        cout<<"z : "<<z<<endl;
    }
    void operator -(){
        x = - x;
        y = - y;
        z = - z;
    }
};

int main(){
    ABC s(10,-20,30);
    
    cout<<"s =====: \n";
    s.display();

    -s;
    cout<<"s ======: \n";
    s.display();

    // getch();

    
    return 0;

}

