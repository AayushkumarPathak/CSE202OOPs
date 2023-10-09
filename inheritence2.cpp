#include <iostream>
using namespace std;
/*Inheritance
Advantage: if there is a application we want to extend some functionalities but want to use also previous one .
*/
class B
{
    int a;

public:
    int b;

    void get_ab();
    int get_a(void);
    void show_a(void);
};
class D : private B
{
    int c;

public:
    void mul(void);
    void display(void);
};

void B::get_ab(void)
{
    a = 5;
    b = 10;
}
int B::get_a(void) { return a; }

void B::show_a(void)
{
    cout << "a = " << a << endl;
}

//for private
void D::mul(void)
{
    get_ab();
    c = b * get_a();
}


void D::display(void)
{
    cout << "a = " << get_a() << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

int main()
{
    D d;
    // d.get_ab();
    d.mul();
    // d.show_a();
    d.display();
    // d.b = 20;
    d.mul();
    d.display();

    return 0;
}