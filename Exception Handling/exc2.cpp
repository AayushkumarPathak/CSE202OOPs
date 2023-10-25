#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a & b: ";
    cin>>a>>b;

    try{
        if(b!=0){
            cout<<"(a/b) : "<<a/b<<endl;
        }
        else{
            throw(b);
        }
    }
    catch(int i){
        cout<<"Exception"<<b;
    }
    return 0;
}