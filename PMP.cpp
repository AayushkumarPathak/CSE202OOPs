#include <iostream>
using namespace std;

class A
{
private:
    int x;
    int y;
};

int main()
{
    A obj;
    int *p = (int *)&obj;

    *p = 5;
    p++;
    *p = 15;
    p--;
    cout << "x = " << *p << endl;
    p++;
    cout << "y = " << *p << endl;
    return 0;
}