#include<iostream>
using namespace std;

class Student{
    private:
    int roll;

    protected:
    int contact;

    public:
    void get_rno(){
        cout<<"Enter the roll no: ";
        cin>>roll;
    }
    void show_rno(){
        cout<<"Roll No: "<<roll<<endl;
    }
};

class Result:protected Student{
    private:
    float fees;

    public:
    void get_data(){
        get_rno();
        //
    }
};
//
/* incomplete */