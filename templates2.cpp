#include<iostream>
using namespace std;

#define MAX 5 //symbolic constant not apart of c lang. or c++ this is compiler 

template<class Type>
Type sum(Type a[]){
    Type total = 0;
    for(int i=0;i<MAX;i++){
        total += a[i]; 
    }
    return total;
}

// template<class type>

int main(){
    int arr[MAX];
    for(int i=0;i<MAX;i++){
        cin>>arr[i];
    }
    cout<<"Sum of all elements in array: "<<sum<int>(arr);
    return 0;
}
