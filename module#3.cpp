#include <iostream>
#include <cstring>
#include <malloc.h>
using namespace std;
typedef struct _String {
    char *str;
}String;

// operator overloading
// changing the definition of operator
String operator*(const String &s1, const String &s2){
    String res;
    res.str = (char *)malloc (strlen(s1.str)*strlen(s2.str)+1);
    strcpy(res.str, s1.str);
    int n=strlen(s2.str);
    while(n--){
        strcat(res.str, s2.str);
    }
    return res;
}

typedef struct _num{
    int n;
}Int;

int operator*(const Int &a, const Int &b){
    return (a.n+b.n);
}

enum E{Harsh=1, Anuj=2, Kaushal=3, Mukesh=4,Vikky=5};

E operator+(const E&a, const E&b){
    unsigned int A = a, B = b;
    unsigned int res = (A+B)%5;
    if (!res)  res = 5;
    return (E)res;
}

int main(){
    String f_name, l_name, full_name;
    f_name.str = strdup("rahul");
    l_name.str = strdup("kumar");
    cout << f_name.str << " " << l_name.str << endl;
    // operator overloading only take argument as class type like struct, class, enum etc .
    full_name = f_name * l_name; // repeat last name n times where n is equal to length of last name
    cout << full_name.str << endl;
    Int a, b ;
    a.n = 5; b.n = 10;
    // operator overloading with function overloading that result addition instead of multiplication
    cout << a * b << endl;

    // Enum operator overloading
    E x = Vikky, y = Vikky;
    cout << x << " & " << y <<" Result of operator overloading = " << (E)x+y << endl; //1 & 2

    return  0;
}
