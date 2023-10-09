#include<iostream>
using namespace std;

class A{
    private:
    int j;

    public:
    int x;
    int y;
    int z;
    A(){
        j = 20;
    }
};

int main(){
    A obj;
    int *p;
    obj.x = 5;
    obj.y = 6;
    obj.z = 7;
    p = &obj.x;
    p--;
    cout<<"j = "<<*p<<endl;
    p++;
    cout<<"x = "<<*p<<endl;
    p++;
    cout<<"y = "<<*p<<endl;
    p++;
    cout<<"z = "<<*p<<endl;
    return 0;
}