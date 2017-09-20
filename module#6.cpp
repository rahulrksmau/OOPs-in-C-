/*
Class : A class is an implementation of a type i.e. it's a blueprint of an object. In c/c++ its build in or derived data type from build in, So class is
        an User Define Data Type(UDT).
        Class have member/attributes
        has operation/methods/member function.
        Class offers object oriented programming, i.e. polymorphism, encapsulation, data hiding/abstraction , inheritance.
        Class provides access specifiers for
            private : accessible from inside of definition of class
            public : access from outside of the class
Object :It's instance of the class. object have member function/attributes . Objects can be automatically, dynamically or static.
        A object have it's identity that comprises data members that specify its state (access by dot('.') ),
        supports member functions that specify its behavior (access by dot('.' ) ).
        An implicit pointer hold the address of an object that is know by 'this' keyword
*/

#include <iostream>
using namespace std;

class Complex{
public:
    double length;
    double height;

    Complex(){
        cout << "Object created and constructor called\n";
        height = 1.5;
        length = 2.5;
    }
};

class Stack{
public:
    char data[100]; int temp_;
    Stack(int n){
            temp_ = n;
    }

    bool empty(){ return temp_ == -1;}
    char top(){ return data[temp_];}
    void push(char c){ data[++temp_] = c;}
    void pop(){ --temp_; }


};

// this pointer
class T{
public:
    int a,b;
    void assign(int x, int y){
        a = x;
        this->b = y;
    }
    void print(){
        cout << this->a <<" "<< this->b << endl;
    }
};

int main(){
    /*
    Complex c;
    cout << c.height << "  " << c.length << endl;

    Stack s(-1);
    cout << s.empty() << endl;
    s.push('R');
    cout << s.top() << " "<<s.temp_<< endl;
    s.push('D');
    cout << s.top() << " "<<s.temp_<< endl;
    s.pop();
    cout << s.top() << " "<<s.temp_<< endl;
    */

    class T t;
    t.assign(100,250);
    t.print();
    //cout << this(a) << endl;
    t.a = 150; t.b = 300;
    t.print();
    return 0;
}
