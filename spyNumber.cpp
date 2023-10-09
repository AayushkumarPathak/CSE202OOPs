#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 123;
    int sum = 0;
    int mul = 1;
    while(n>0){
        int dig = n%10;
        sum += dig;
        mul += dig;


    }
    if(sum == mul){
        cout<<"spy number";
    }
}