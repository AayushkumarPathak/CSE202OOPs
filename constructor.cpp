#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    int marks;
    public:
    void get(){
        cin>>name;
        cin>>marks;
    }
    void put(){
        cout<<name<<endl;
        cout<<marks<<endl;
    }
    static int objCount;

    Student(){
        objCount++;
    }
};
int Student::objCount = 0;
int main(){
    Student s1,s2,s3,s4;
    s1.get();
    s2.get();
    s3.get();
    s4.get();
    
    s1.put();
    s2.put();
    s3.put();
    s4.put();
    
    cout<<"Objects created: "<<Student::objCount<<endl;
    return 0;
}