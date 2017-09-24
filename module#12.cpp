#include <iostream>
#include <string>
using namespace std;
/*
Friend: Its is type of declaration by which global or any function can be use as it's own function , just like a friend.
        * has access to the private and protected member of the class(breaks the encapsulation)
        * must have its prototype included within the scope of the class prefixed with the keyword friend
        * is not called with an invoking object of the class
        * can be declared friend in more then one classes

Friend function can be: * global function
                        * a member function of a class
                        * a function template
*/
// Example 1:
class Car{
    double price;
public:

    Car():price(100000){
        cout <<"Constructor created of car of price "<<price <<endl;
    }
    friend void price(Car &c, double prc);
    void model(string mdl){
        cout << "Car is of " << mdl << " model\n";
    }

};
void price(Car& c, double prc){
    c.price = prc;
    cout << "Now price is "<< c.price << endl;
}

class Student{
    string name;
    static int roll_no;
public:
    Student(string n): name(n){
        roll_no += 1;
        cout << "Student's name is " << name  << "Roll number "<<roll_no << endl;
    }
    void display(){

    }
};
int Student::roll_no = 1;
int main(){
    Car c;
    c.model("Nano");
    price(c,1500000);
    //c.price();

}
