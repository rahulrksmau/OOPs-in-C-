#include <bits/stdc++.h>
#include <stdio.h>
#include <assert.h>
#include <cstdlib>
using namespace std;

// assert and memset function
// memset is c library use to set a size of memory location by a value.

void print_number(int* myInt, int* secInt) {
  assert (myInt != secInt);
  printf ("%d\n",*myInt);
}

class Test{
public:
    const int* t= new int();
    const char* c= new char();

};

class Fun{
private:
    Test* t1;
    Test* t2;
public:
    void call(){
        Test* h = new Test();
        cout << sizeof(h) << endl;
        cout << h->t << endl;
        cout << h->c << endl;
    }
};

int main ()
{
  int a=10;
  char Arr[10];
  memset(Arr, '$', sizeof(Arr)/sizeof(Arr[0]));
  cout << Arr  << endl;
  cout << "  " << sizeof(Arr) << endl;
  int * b = NULL;
  int * c = NULL;

  b=&a;
  c = &a;
 // print_number (b,c);
  //print_number (c);
    cout << "\n############################\n";
/*
    int* m  = new int(); // new keyword produce int* type having size of int with value 0 by default.
    char* n = new char('C');// no default value
    Fun* arr = new Fun;
    cout << sizeof(arr) <<endl;
    arr->call();

    cout << sizeof(m) << endl;
    cout << sizeof(n) << endl;
    cout << n  << "  " << *n << endl;
*/
    char* pchar = new char[5];
    for(int i=0; i<15; i++) pchar[i] = (char)('a'+i);
    char r= 'a';
    char* ch = &r;
    cout << *ch << " " << r << " " << sizeof(ch) << " " << sizeof(r) << endl;
    cout << sizeof(pchar)<< "  " << pchar<< endl;
  return 0;
}
