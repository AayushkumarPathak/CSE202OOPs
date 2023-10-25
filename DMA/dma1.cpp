#include<iostream>
using namespace std;

int main(){
    int *arr;
    int size;
    cout<<"Enter the size of int array: "<<endl;
    cin>>size;
    cout<<"Creating an array of size "<<size<<endl;
    arr = new int[size];
    if(arr == NULL){
        cout<<"Problem in memory allocation."<<endl;
        exit(1);
    }
    else{
        cout<<"Dynamic memory allocation for array arr is successfull."<<endl;
    }
    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++){
        cin>>*(arr+i);
    }
    cout<<"Array elements are: ";
    for(int i=0;i<size;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    delete []arr;
    cout<<"Memory deallocated."<<endl;
    return 0;
}