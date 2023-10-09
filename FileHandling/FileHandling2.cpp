#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    int c,d;
    cin>>a>>b;
    ofstream outfile("data2");
    outfile<<a<<" "<<b<<" ";
    outfile.close();
    ifstream infile("data2");
    infile>>c>>d;
    cout<<c<<" "<<d<<"\n";
    return 0;
}