#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b << endl;  // b value is 1 ;           <==
    cout << c << endl;  //  i think c value is 3 ;  <=^=  (right all and is good )
}