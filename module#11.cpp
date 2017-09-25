#include <iostream>
using namespace std;

/*
 Static data member
 Static data function
 It can be public and private.
 Is Shared by all object of the class.
 static function have no this pointer (not associated with any object)
 static function cannot access not static function and members of the class.
 cannot coexist with non static function
 cannot const

 Associated with class not objects hence call by scope resolution(::) not by dot(.). And also must be initialize and declare explicitly out of class.
 static function cannot contain class data member.
*/
class Clock{
    static int hour;
public:
    Clock(int n){
        hour += n;
        cout << "Constructor called ";
    }
    void time(){
        hour = 1;
    }
    void click(){
        if(hour != 12) hour += 1;
        else hour = 1;
        cout << "Time is = " << hour << endl;
    }
};
int Clock::hour=0; // initialize and declare

class Process{
    int page;
    static int nPages;
    static int nJobs;
public:
    Process(int n): page(n){
        nJobs += 1;
        nPages -= n;
        cout << "Process Start total process = "<<job <<endl ;
    }
    ~Process(){
        nJobs -= 1;
        cout << "Process end \n";
    }
    static int getJobs(){ return nJobs;}
    static int checkPages(){ return nPages; }
    static void loadPages(int n){
        nPages += n;
    }

};
int Process::nPages = 1000;
int Process::nJobs = 0;
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
    Process p1,p2; // only process created by this type call destructor
    Process* p3 = new Process();
    cout << p1.getJobs() << endl;
    cout << p1.checkPages() << endl;
}
