#include<iostream>
using namespace std;

//10
// 1 2 3 4 5 6 7 8 9 10
//10
class Node{public: Node(){cout<<"Node created";}};

int main(){
    Node n1;
    int n;
    cin>>n;
    int *arr;
    arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }

    int ps;
    cin>>ps;
    int *flag;
    flag = new int;
    *flag = 0;
    for(int i=n/2;i<=n;i++){
        for(int j=n/2;j>=0;j--){
            if(arr[i]+arr[j]==ps){
                cout<<"Pair sum of ("<<arr[i]<<","<<arr[j]<<")"<<" is "<<ps<<endl;
                *flag++;
            }
            
        
        }
    }
    if(*flag==0){
        cout<<"pair not found"<<endl;
    }

    delete flag;

    delete arr;
}