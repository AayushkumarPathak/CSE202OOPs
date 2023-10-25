#include <iostream>
using namespace std;
 
int main(){
    // int *p = NULL;
    // p = new int;
    // if (!p){
    //     cout << "Memory Allocation failed." << endl;
    //     exit(1);
    // }
    // if (p == NULL){
    //     cout<<"Memory Allocation failed."<<endl;
    //     exit(1);
    // }

    // *******2nd********** //
    float *a , *b, *c, *d;
    a = new float;
    b = new float;
    c = new float;
    d = new float;

    if(a==NULL || b==NULL || c==NULL || d==NULL){
        cout<<"Allocation failure occured."<<endl;
        exit(1);
    }
    cout<<"Enter (principal amount , rate and time) : ";
    cin>>*a>>*b>>*c;

    *d = (0.01)*(*a)*(*b)*(*c);
    cout<<"Simple Interest is: "<<*d;

    delete a;
    delete b;
    delete c;
    delete d;
    cout<<"\nDeallocated"<<endl;

    return 0;
}