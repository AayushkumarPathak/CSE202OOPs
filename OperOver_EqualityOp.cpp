#include<iostream>
using namespace std;

class Equality{
    int x , y;
    public:
    Equality(){
        x = 0;
        y = 0;
    }
    Equality(int a,int b){
        x = a;
        y = b;
    }

    bool operator ==(Equality e){
        if(x == e.x && y == e.y){
            return 1;

        }
        else{
            return 0;
        }
    }

};

int main(){
    Equality e1(3,3) , e2(3,2);

    if(e1 == e2){
        cout<<"Value of x and y for e1 and e2 are same."<<endl;
    }
    else{
        cout<<"Value of x and y for e1 and e2 are not same."<<endl;
    }
}