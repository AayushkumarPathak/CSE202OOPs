// You are using GCC
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    int ch;
    cin>>ch;
    
    while(true){
        if(ch==1){
            int ele;
            cin>>ele;
            s.push(ele);
            cout<<"Element "<<ele<<" pushed onto the stack."<<endl;
        }
        else if(ch==2){
            if(s.empty()){
                cout<<"Stack Underflow. Cannot perform pop operation."<<endl;
            }
            else{
                int x = s.top();
                s.pop();
                cout<<"Element "<<x<<" popped from the stack."<<endl;
                // s.pop();
                // cout<<"Element "<<s.top()<<" popped from the stack."<<endl;
            }
        }
        else if(ch==3){
            if(s.empty()){
                cout<<"Stack is empty."<<endl;
            }
            else{
                cout<<"Elements in the stack: ";
                while(!s.empty()){
                    cout<<s.top()<<" ";
                    s.pop();
                }
                cout<<endl;
            }
        }
        else if(ch==4){
            cout<<"Exiting the program.";
            break;
            
        }
        else{
            cout<<"Invalid choice."<<endl;
            if(s.empty()){
                cout<<"Stack is empty."<<endl;
                cout<<"Exiting the program."<<endl;
            }
            break;
        }
        cin>>ch;
    }
    return 0;
}
