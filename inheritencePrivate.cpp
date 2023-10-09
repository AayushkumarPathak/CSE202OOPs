#include<iostream>
using namespace std;

class Person{
    int id;
    string name;

    public:
    void getDataP(){
        cout<<"Enter the id:";
        cin>>id;
        cout<<"Enter the name:";
        cin>>name;

    }
    void displayP(){
        cout<<"\n\nId: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

class Student:private Person{
    string course;
    int fee;
    public:

    void getDataS(){
        getDataP();
        cout<<"Enter course: ";
        cin>>course;

        cout<<"Enter Fee: ";
        cin>>fee;
    }

    void displayS(){
        displayP();
        cout<<"Course: "<<course<<endl;

        cout<<"Fee: "<<fee<<endl;
    }

};

int main(){
    Student s1;

    s1.getDataS();
    s1.displayS();
}