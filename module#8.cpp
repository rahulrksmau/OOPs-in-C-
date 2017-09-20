/*
Constructor : The member function of the class which called by itself at the time of instance created.
              There is two type of constructor created , 1) inside the class, 2) outside the class
              * it have default this pointer,
              * no return type or mechanism of return type, no required of void , or any other return type
              * has a initialization list i.e within the ":" and starting '{' any or all member are initialize.
              * can be overloaded

Destructor :  represented by ~NameOfClass(), It called by 2 type
              * By calling with the name of the function. Called explicitly to free memory allocated by its datatype or resources allocated to it.
              * Implicitly called by itself at the end of scope or operator delete.
              * have no return type and cannot be overloaded.
Both Constructor and destructor is provided by compiler as free default C/D.
Free cons. have garbage value if called default.
*/
#include <iostream>
using namespace std;
// Inside the class
class Rect{
private:
    double l, b;
public:
    Rect(double x = 1.5, double y = 2.5){
       l = x; b = y;
    }
    ~Rect(){
        cout <<"Destructor of Rect called here \n";
    }
    void are(){
        cout << l*b << endl;
    }
    void perimeter(){
        cout << 2*(l+b) << endl;
    }

};

// outside the class
class Square{
private :
    double r;
public:
    Square(double);
    ~Square();
    void are(){
        cout << r*r << endl;
    }
    void perimeter(){
        cout << 4*r << endl;
    }
};

Square::Square(double x=1.5): r(x){
    cout << "created\n";
}
Square::~Square(){
cout << "Destructor of Square Called Here\n" ;}
// default Constructor


class Circle{
private:
    double r;
public:
    void print(){
        cout << "Radius = " << r << endl;
    }
    ~Circle(){
        cout << "Destructor of Circle called here\n";
    }
};


int main(){
    Rect* r = new Rect(2,2.5);// Default destructor did not call itself
    r->are();
    r->perimeter();

    Circle* c_ = new Circle(); // destructor did not call
    c_->print();

    Circle c; // destructor called
    c.print();

    Square s ;// destructor called
    s.are();
    s.perimeter();


    return 0;
}
// Last Destructor called only

//Circle constructor
//Square constructor


//LIFO structure  Constructor called Destructor Called
