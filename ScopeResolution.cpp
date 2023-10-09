#include<iostream>
using namespace std;
int x = 1, y = 2, z = 3;

int main(){
    cout<<"x = "<<x<<" "<<"y = "<<y<<" "<<"z = "<<z<<endl;
    {
        int x = 10;
        int y = 20;
        cout<<"x = "<<::x<<" "<<"y = "<<::y<<" "<<"z = "<<::z<<endl;
        {
            int z = 30;
            cout<<"x = "<<x<<" "<<"y = "<<y<<" "<<"z = "<<z<<endl;

        }
        
    }
    return 0;
}
