#include<bits/stdc++.h>
using namespace std;

class Account{
    int acc_no;
    string name;
    float bal;

    public:
    void Register(){
        cout<<"Enter the Account number:";
        cin>>acc_no;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the balance: ";
        cin>>bal;
    }
    void withdraw(){
        float amt;
        cout<<"Enter the amount to withdraw:";
        cin>>amt;
        bal = bal - amt;
        cout<<"! Thankyou for using Banking With Us !";
        cout<<"Balance: "<<bal;
    }
};

int main()
{   
    Account a1;
    a1.Register();
    a1.withdraw();
    return 0;  
}