#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

// Comparing malloc and new dynamic memory allocation keyword

int main(){
    // malloc
    char test[20];
    memset(test, '#', 15);
    memset(test+15, '$', 5);
    memset(test+20, '\0', 1);
    cout << test << endl;
    int *p = (int *)malloc(sizeof(long long)); // return void type memory size of given size we have to typecast the memory space
    cout << sizeof(p) << endl; // size of int = 4
    cout << *p << endl; // doesn't initialize itself
    *p = 10;
    cout << *p << endl;
    free(p); // freeing memory only by using free() function passing the pointer
    cout << *p << endl; // will show garbage value , showing default values instead of value assigned i.e. it became


    // new
    int *q = new int(10); // allocating memory of size_t int with value equal to passing argument of datatype.
    cout << sizeof(q) << endl; // size of int = 4
    cout << *q << endl; // value equal to argument passed that is equal to 10.
    free(q);
    cout << *q << endl; // will show garbage value

    unsigned char buff[sizeof(int)*2];
    cout << sizeof(buff) << endl;
    int *f = new(buff) int(1);
    cout << *f << endl;
    f = new(buff+sizeof(int)) int(3);
    cout << *f << endl;
    delete f;
    return 0;
}
