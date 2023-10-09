#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    int marks1,marks2;
    // cout<<"Enter str1:";
    getline(cin,str1);
    // cout<<"Enter c: ";
    cin>>marks1;
    ofstream writeOnFile("student1");
    writeOnFile<<str1<<"\n"<<marks1<<" ";
    writeOnFile.close();

    ifstream getFromFile("student1");
    getline(getFromFile,str2);
    getFromFile>>marks2;
    cout<<str2<<"\n";
    cout<<marks2<<" ";
    



    return 0;

}