#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    int **pt = &ptr;

    cout<<*ptr<<endl;
    cout<<**pt<<endl;

    **pt = 30;

    cout<<a<<endl;

    // this pointer, - static , array , string . ||next class||.
}