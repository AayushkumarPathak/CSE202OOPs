#include<iostream>
using namespace std;

enum color{black=1,blue,red};

int main(){
    // // color obj = yellow; // compilation error
    // color obj;
    // cout<<black;
    // enum daysofWeek{sun,mon,tue,wed,thu,fri,sat};

    // daysofWeek Today,PayDay, DayOff;
    // Today = wed;
    // cout<<Today<<endl; //generally they are represented by constants

    // PayDay = fri;
    // cout<<PayDay<<endl;

    // DayOff = sat;
    // cout<<DayOff<<endl;

    enum days{sun,mon,tue,wed,thu,fri,sat};

    days day1,day2;

    day1 = sun;
    day2 = mon;

    if(day1>day2){
        cout<<"Day1 is greater than Day2";
    }
    else{
        cout<<"Day2 is greater than Day1";
    }

    


    return 0;

}
