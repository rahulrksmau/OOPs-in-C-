#include <iostream>
#include <cmath>
using namespace std;

// public access specifier
class Complex{
    public: double real, imaginary;
    public: double norm(){
                return sqrt(real*real + imaginary*imaginary);
            }
};

void print(const Complex &c){
    cout << "real = " << c.real << " imaginary = " << c.imaginary << endl;
}

class Area{
//    private: double l,b;
    public: double l,b;
    public: double area(){
                return l*b;
            }
};

void print(const Area &a){
    cout << "length = " << a.l << "breath = " << a.b << endl;
}
/*
        E:\c\NPTL C++\module#7.cpp|18|error: 'double Area::l' is private|
        E:\c\NPTL C++\module#7.cpp|24|error: within this context|
        E:\c\NPTL C++\module#7.cpp|18|error: 'double Area::b' is private|
        E:\c\NPTL C++\module#7.cpp|24|error: within this context|
        E:\c\NPTL C++\module#7.cpp||In function 'int main()':|
        E:\c\NPTL C++\module#7.cpp|35|error: in C++98 'a' must be initialized by constructor, not by '{...}'|
        E:\c\NPTL C++\module#7.cpp|35|error: could not convert '{1.2e+0, 4.0000000000000002e-1}' from '<brace-enclosed initializer list>' to 'Area'|
        ||=== Build failed: 6 error(s), 0 warning(s) (0 minute(s), 1 second(s)) ===|

*/

int main(){
    // public
    Complex c = {3.0,4.0};
    cout << c.norm() << endl;;
    print(c);

    // private
    Area a = {1.2, 0.4};
    cout << a.area() << endl;
    print(a);


    return 0;
}

/*
Class provide access specifier in order to provide data accesibility that separates implementation from interface.
Private : accessible from inside of the definition of the class
          from member function of same class
Public :  access by member function of same function,
          member function of different function,
          global function.

default is public access specifier.
Customarily we put state i.e attributes of a class as private and behavior i.e method as public . So that state can only implemented through inside
of the class and behavior can access or known from outside of the class.
This is known as INFORMATION HIDING.
*/
