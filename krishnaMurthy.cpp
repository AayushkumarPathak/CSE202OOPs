#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number n:";
    cin>>n;

    int fact = 1;
    int sum = 0;

    while(n>0){
        int dig = n % 10;
        for(int i=1;i<=dig;i++){
            fact *= i;
            sum += fact;
        }
        n = n/10;
    }
    if(sum == n){
        cout<<" Is KrishnaMurthy Number."<<endl;
    }
    else{
        cout<<" Is Not KrishnaMurthy Number."<<endl;
    }
}