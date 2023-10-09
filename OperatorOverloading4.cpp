//  ****** Example of overloading Unary operator  ******

#include<iostream>
using namespace std;


class Pen{
    private:
    int price;

    public:
    Pen(){
        price = 10;
    }

    friend void operator ++(Pen &p1);

    int show(){
        return price;
    }
};

void operator ++(Pen &p1){
    p1.price = p1.price + 4;
}

int main(){
    Pen p1 , p2;
    cout<<"Initial Price p1: "<<p1.show()<<endl;
    cout<<"Initial Price p2: "<<p2.show()<<endl;

    ++p1;
    ++p1;
    ++p2;

    cout<<"Final Price p1: "<<p1.show()<<endl;
    cout<<"Final Price p2: "<<p2.show()<<endl;




    return 0;
}