#include<iostream>
using namespace std;

template<class T>
T square(T num){
    return(num*num);
}

template<class T2>
T2 min1(T2 a,T2 b){
    return(a<b?a:b);

}
template<class t3>
void swap1(t3 &a, t3 &b){
    t3 temp = a;
    a = b;
    b = temp;

}




int main(){
    //Example 1
    int n1 = 3;
    cout<<"Square of n1 "<<n1<<" is: "<<square<int>(n1)<<endl;
    //Example 2
    int a = 5;
    int b = 9;
    cout<<"Min val from a and b is: "<<min1<int>(a,b)<<endl;

    //Example3
    int x = 41, y = 51;
    float c = 31.3, d = 21.3;
    char ch1 = 'A', ch2 = 'B';

    cout<<"\nBefore swaping: x = "<<x<<" and "<<" y =  "<<y<<endl;
    cout<<"Before swaping: c = "<<c<<" and "<<" d  = "<<d<<endl;
    cout<<"Before swaping: ch1 = "<<ch1<<" and "<<" ch2 =  "<<ch2<<endl;

    

    swap1<int>(x,y);
    swap1<float>(c,d);
    swap1<char>(ch1,ch2);
    cout<<"\nAfter swaping x = "<<x<<" and "<<" y  = "<<y<<endl;
    cout<<"After swaping c = "<<c<<" and "<<" d = "<<d<<endl;
    cout<<"After swaping ch1 = "<<ch1<<" and "<<" ch2 = "<<ch2<<endl;


}