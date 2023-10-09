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
    friend bool operator ==(Equality e1,Equality e2);


};
bool operator ==(Equality e1, Equality e2){
    if(e1.x == e2.x && e1.y == e2.y ){
        return true;
    }
    return false;
}

int main(){ Equality e1(3,2), e2(3,3); if(e1==e2){cout<<"Equal";}else{cout<<"Not Equal";}return 0;}

/* H/W
    < , > !=
*/
