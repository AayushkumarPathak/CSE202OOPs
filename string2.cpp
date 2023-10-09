#include<iostream>
#include<string>
using namespace std;

int main(){

    // string s("Ram singh");
    // cout<<s;

    // strcpy - to copy string
    // strcat - to concatnet


    //Manipulating functions

    string s1("12345");
    string s2("abcde");
    s1.insert(4,s2);

    cout<<s1<<endl;

    s1.erase(4,5);
    cout<<s1<<endl;

    s2.replace(1,3,s1);
    cout<<s2<<endl;

    s2.append(s1,2,3);
    cout<<s2<<endl;

    string b = "boy";
    string g = "girl";

    cout<<b<<endl;
    cout<<g<<endl; b.swap(g);
    cout<<"Now b is: "<<b<<endl;
    cout<<"Now g is: "<<g<<endl;

    // cout<<b.max_size()<<endl;
    cout<<b.size()<<endl;
    cout<<b.length()<<endl;

    cout<<"Empty: "<<(b.empty()? "yes":"no")<<endl;

    cout<<b.capacity()<<endl;

    string str = "welcome";
    cout<<"Capacity of welcome "<<str.capacity()<<endl;

    string str2 = "LovelProfessionalUniversity";
    cout<<"Capacity LovelyProfessionalUniversity "<<str2.capacity()<<endl;

    string w1 = "Ram Singh";
    string w2 = "Ram Kumar";

    if(w1 == w2){
        cout<<"w1 and w2 are same."<<endl;
    }
    else{
        cout<<"Not same. "<<endl;
    }

    if(w1>w2){
        cout<<"w1 is greater than w2"<<endl;
    }
    else{
        cout<<"w2 is greater than w1"<<endl;
    }

    string m = "ABC";
    string n = "XYZ";

    int x = m.compare(n);
    // -x == 0 if m == n
    // -x > 0 if m > n;
    // -x < 0 if m < n;

    cout<<x<<endl;

    string n1 = "bcme";
    string n2 = "bcmerome";
    int ans = n1.compare(2,2,n2,5);
    cout<<ans<<endl;

    /*
    SOME MORE C++ STRING 
    1. at()
    2. substr()
    3.find()
    4.rfind()
    5.find_first_of()
    6.find_last_of() - for finding last occurance of the specific
    7.getline(cin,name) - for taking the string object value from user standard io function
    */

   string l1 = "welcome";
   string l2;
   l2 = l1.substr(0,3);
   cout<<l2<<endl;

   string s4 = "arlcomea";
   string s3 = "wearomea";


   cout<<"found at: "<<s4.find("lc")<<endl;
   cout<<"found first occ: "<<s4.find_first_of("a")<<endl;
   cout<<"found last occ: "<<s4.find_last_of("a")<<endl;









    return 0;
}