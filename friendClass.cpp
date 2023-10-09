#include <iostream>
using namespace std;

class A;
class B
{
public:
    void display(A obj);
};
class A
{
    int x;

public:
    A()
    {
        x = 4;
    }
    friend void B::display(A);
};
void B::display(A obj)
{
    cout << obj.x << endl;
}
int main()
{
    A obj1;
    B obj2;
    obj2.display(obj1);
    return 0;
}