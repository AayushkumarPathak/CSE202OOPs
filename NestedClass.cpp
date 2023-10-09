#include<iostream>
using namespace std;

class alpha{
    public:
    int a;

    alpha(int i=0){
        a = i;
    }

    class beta{
        public:
        int b;

        beta(int j=0){
            b = j;
        }
    };
};
int main(){
    return 0;
}