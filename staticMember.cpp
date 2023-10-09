#include<iostream>
using namespace std;

class A{
    int t;
    static int b;
    public:
    void input(void){
        cin>>t;
        // cin>>b;
    }
    void print(void){
        cout<<"t: "<<t<<endl;
        cout<<"b: "<<b<<endl;
    }
};
int A::b = 10;
int main(){
    A a1;
    a1.input();
    a1.print();
    return 0;

}
