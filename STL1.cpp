#include<iostream>
#include<list>
#include<vector>
using namespace std;
/* 
STL contains

1.Conatainer
2.Algorithms ( function can be called as algorithm)
3.Iterators

*/

int main(){
    vector<int> v1 = {1,2,3,4,5};

    vector<int> v2 = {6,7,8,9,10};

    cout<<"Vector 1: ";
    
    
    //iteration
    for(const int i : v1){
        cout<<i<<" ";
    }
    vector<int> v3(5,12);
    cout<<"\nVector 3: ";
     for(const int j : v2){
        cout<<j<<" ";
    }

    v1.push_back(16);
    v1.push_back(17);
    cout<<"\nUpdated v1: ";
    for(const int &i:v1){
        cout<<i<<",";
    }
    cout<<endl;


    vector<int>prime{2,3,5,7};
    cout<<"Size of prime(): "<<prime.size()<<endl;
    cout<<"Front: "<<prime.front()<<endl;
    cout<<"Back: "<<prime.back()<<endl;

    cout<<"Max: "<<prime.max_size()<<endl;



    



    return 0;
}