#include <iostream>
using namespace std;
void sum(int, int);
void mul(int, int);
int mod(int, int);

int main()
{
    int a, b;
    cout << "Enter a & b: ";
    cin >> a >> b;
    sum(a, b);
    mul(a, b);

    int ans = mod(a, b); // actual argument
    cout <<"Modulus:"<< ans << endl;

    return 0;
}

void sum(int x, int y)
{
    int c = x + y;
    cout << "sum is:" << c << endl;
    ;
}
void mul(int x, int y)
{
    int c = x * y;
    cout << "sum is:" << c << endl;
}
int mod(int x, int y)
{
    int m = x % y;
    return m;
}