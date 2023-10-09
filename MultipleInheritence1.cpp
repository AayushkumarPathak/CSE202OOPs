#include<iostream>
using namespace std;

class M{
    protected:
    int a;
    
    public:
    void get_a(int);
};

class N{
    protected:
    int b;
    
    public:
    void get_b(int);
};

class P:public M,public N{
    public:
    void display(void);

};

void M::get_a(int x){
    a = x;
}
void N::get_b(int y){
    b = y;
}
void P::display(void){
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"a*b: "<<a*b<<endl;

}
int main(){
    P p1;
    p1.get_a(10);
    p1.get_b(20);

    p1.display();

    return 0;
}
