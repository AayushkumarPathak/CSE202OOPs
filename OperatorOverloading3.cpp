//  ********** Example of overloading Unary Operator ************

#include<iostream>
using namespace std;

class Score{
    private:
    int val;

    public:
    Score(){
        val = 0;
    }
    void operator ++(){
        val = val + 1;
    }
    int show(){
        return val;
    }

};

int main(){
    Score s1,s2;
    cout<<"Initial value of s1 object: "<<s1.show()<<endl;
    cout<<"Initial value of s2 object: "<<s1.show()<<endl;

    ++s1;
    ++s1;
    ++s2;
    
    cout<<"final value of s1 object: "<<s1.show()<<endl;
    cout<<"final value of s2 object: "<<s2.show()<<endl;

    
    return 0;
}

