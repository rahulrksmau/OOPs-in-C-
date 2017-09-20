#include <iostream>
using namespace std;
static int i;

int main(){
    for(int j=0; j<5; j++)
        {cout << i <<"\n";
        fun();
        i++;
        }
    return 0;
}
//output:
//0
//1
//2
//3
//4

/*
 Static variable is such variable which hold it's previous value remain in the memory.
 Its' default initialization is 0.

*/
