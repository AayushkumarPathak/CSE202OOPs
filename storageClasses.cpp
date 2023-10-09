/*
1.automatic
2.external
3.Register
4.static
*/

#include<iostream>
using namespace std;

// int sum(int a,int b){
//     int c = a + b;
//     return c;
// }

class Account{
    public:
    static int t;

};
int Account :: t = 0;
int main(){
    // {
    //     int a,b,c;
    //     cin>>a>>b;
    //     c = sum(a,b);
    //     cout<<c<<endl;
    // }
    // cout<<"size of"<<sizeof(a); // error variable undefined 

    Account a1; 
    cout<<a1.t;
    cout<<Account::t;

    return 0;
}