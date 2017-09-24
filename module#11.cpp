#include <iostream>
using namespace std;

/*
 Static data member
 Static data function
 Associated with class not objects hence call by scope resolution(::) not by dot(.). And also must be initialize and declare explicitly out of class.
 static function cannot contain class data member.
*/
class Clock{
    static int hour;
public:
    void time(){
        hour = 1;
    }
    void click(){
        if(hour != 12) hour += 1;
        else hour = 1;
        cout << "Time is = " << hour << endl;
    }
};
int Clock::hour=0;

int main(){
    Clock* C = new Clock();
    Clock c1,c2;
    int n;
    cin >> n;
    while(n--){
     //   c1.time();
        c1.click();
        C->click();
       // c2.time();
        c2.click();
    }
}
