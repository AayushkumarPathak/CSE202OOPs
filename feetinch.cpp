#include<iostream>
using namespace std;

class Distance{
    private:
    int feet;
    int inch;

    public:
    Distance(int f,int inc){
        feet = f;
        inch = inc;
    }

    void operator --(){
        feet = feet - 1;
        inch = inch - 1;

    }
    void put(){
        cout<<feet<<"'"<<inch<<endl;
    }
};

int main(){
    int f;
    int inc;
    cin>>f>>inc;
    Distance d(f,inc);
    --d;
    d.put();
    return 0;
}