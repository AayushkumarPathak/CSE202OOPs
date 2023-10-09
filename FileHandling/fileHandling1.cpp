
#include <bits/stdc++.h>
using namespace std;


int main(){
    string s1,s2,s3,s4;
    cin>>s1>>s2;
    ofstream outfile("data");
    outfile<<s1<<" ";
    outfile<<s2<<" ";
    outfile.close();

    ifstream infile("data");
    infile>>s3>>s4;
    cout<<s3<<" ";
    cout<<s4<<" ";
    return 0;
}