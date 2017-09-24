#include <iostream>
using namespace std;
/*
Copy Constructor
*/
class Ract{
private :
    double l,b;
public:
    Ract();
    ~Ract();
    void area(){
        cout << "Area = "<< l*b << endl;
    }
};
Ract::Ract(): l(2.5), b(1.5){
    cout << "Constructor Called\n";
}
Ract::~Ract(){
    cout <<"Destructor called \n";
}

void fun(Ract R){
    cout << "Class pass as argument in a function\n";

}

int main(){
    Ract r;
    fun(r);
    Ract* r1 = new Ract();
    r1->area();
    return 0;
}
