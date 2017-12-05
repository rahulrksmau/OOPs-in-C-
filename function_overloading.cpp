/*
Function Overloading
It is property by which a single named function can be use for different purpose with different parameter based on number,type with different return type.

*/

#include <iostream>
using namespace std;
void fun();
//void fun(int );
//void fun(int , double );
int fun(int);
double fun(int, double);


int main(){
    fun(); // 1st function
    fun(10);
    cout << fun(11);
    fun(10,1.5);
    cout << fun(10,1.6);
    return 0;
}

void fun(){
    cout << "No parameter\n";
}
/*
void fun(int i=0){
    cout << "one parameter with no return value i = " << i << endl;
}
*/
int fun(int i=0){
    cout << "one parameter with int return value i = " << i << endl;
    return i;
}
/*
void fun(int i=0, double d=0.0){
    cout << "two parameter with no return value i = "<< i << " d = "<< d << endl;
}
*/
double fun(int i=0, double d=0.0){
    cout << "two parameter with double return value i = "<< i << " d = "<< d << endl;
    return d;
}

