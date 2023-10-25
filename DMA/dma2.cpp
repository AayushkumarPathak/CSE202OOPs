#include<iostream>
using namespace std;

int main(){
    double *arr,*sum,*avg;
    double *size;
    cin>>*size;
    arr = new double[*size];

    sum = new double;
    avg = new double;

    if(arr == NULL){
        cout<<"Memory allocation aborted.."<<endl;

    }
    else{
        cout<<"Memory allocated."<<endl;
    }
    cout<<"Enter elements: ";
    for(int i=0;i<*size;i++){
        cin>>*(arr+i);
    }

    for(int i=0;i<*size;i++){
        *sum = *sum+*arr+i;
    }
    cout<<"Sum is:  "<<*sum;


}