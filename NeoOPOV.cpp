// #include <iostream>
// using namespace std;

// class Element {
// public:
//     int value;
//     Element(int val) : value(val) {}
//     Element operator++(int) {
//         value--;
//         return *this;
//     }
// };

// int main() {
//     Element obj(121);
//     Element result = obj++;
//     cout << result.value;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Value {
// public:
//     int val;
//     Value(int v) : val(v) {}
//     Value operator!() {
//         return Value(!val);
//     }
// };

// int main() {
//     Value v(1);
//     Value res = !v;
//     cout << res.val;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Distance{
//     public:
//     int feet;
//     int inch;
    
//     void getIn(){
//         cin>>feet>>inch;
//     }
    
//     void operator --(){
//         feet = feet - 1;
//         inch = inch -1;
//     }
    
//     void display(){
//         cout<<feet<<"'"<<inch<<endl;
//     }
    
// };

// int main(){
//     Distance d;
//     d.getIn();
//     --d;
//     d.display();
//     return 0;
// }

// #include <iostream>

// class Fraction {
// public:
//     int numerator;
//     int denominator;

//     Fraction(int n, int d) : numerator(n), denominator(d) {}

//     Fraction operator+( Fraction& other)  {
//         int newNumerator = (numerator * other.denominator) + (other.numerator * denominator);
//         int newDenominator = denominator * other.denominator;
//         return Fraction(newNumerator, newDenominator);
//     }
// };

// int main() {
//     Fraction f1(1, 2);
//     Fraction f2(2, 3);

//     Fraction result = f1 + f2;
//     std::cout << result.numerator << "/" << result.denominator;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Matrix {
// public:
//     int value;
//     Matrix(int val) : value(val) {}
//     Matrix operator+(Matrix& other) {
//         return Matrix(value + other.value);
//     }
// };

// int main() {
//     Matrix m1(5);
//     Matrix m2(10);
//     Matrix result = m1 + m2;
//     cout << result.value;
//     return 0;
// }

// check age same 23 24 23

// #include <iostream>
// using namespace std;
// class Person {
// private:
//     int age;

// public:
//     Person(int _age) : age(_age) {}

//     bool isSameAgeAs(const Person& other) const {
//         return age == other.age;
//     }

//     int getAge() const {
//         return age;
//     }
// };

// int main() {
//     int age1, age2, age3;
//     cin >> age1 >> age2 >> age3;

//     Person person1(age1);
//     Person person2(age2);
//     Person person3(age3);

//     if (person1.isSameAgeAs(person2)) {
//         cout << "Person 1 is the same age as Person 2." << endl;
//     } else {
//         cout << "Person 1 is not the same age as Person 2." << endl;
//     }

//     if (person1.isSameAgeAs(person3)) {
//         cout << "Person 1 is the same age as Person 3." << endl;
//     } else {
//         cout << "Person 1 is not the same age as Person 3." << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Temperature {
// public:
//     int celcius;
//     Temperature(int c) : celcius(c) {}
//     operator float() {
//         return celcius * 1.8 + 32;
//     }
// };

// int main() {
//     Temperature temp(28);
//     float result = temp;
//     cout << result;
//     return 0;
// }

#include <iostream>
using namespace std;

class Number {
public:
    int value;
    Number(int val) : value(val) {}
    operator int() {
        return value * 2;
    }
};

int main() {
    Number num(19);
    int result = num;
    cout << result;
    return 0;
}
