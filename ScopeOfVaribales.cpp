#include <iostream>
using namespace std;
int global = 5;
void func()
{
    int age = 18;
}
void display(){
    cout<<"Using display"<<global<<endl;
}

int main()
{
    int a = 2;
    int b = 3;
    int c = a + b;
    cout << "A+B: " << c << endl;

    {
        int x = 4;
    }
    // cout<<x;  // error x is undeclared since it local till the blocks.
    display();
    int global = 6;
    cout << "Local variable given the preference among global variables.";
    cout << global << endl;
    // cout<<age<<endl; // error bcz age is local to the  scope only to the function func();
    display();
}