#include <iostream>
using namespace std;
int main()
{
    int a, b = 1;
    a = 11;
    if (++a)             // this condition is true then my ++a condition is run and print tha value of b 
        cout << b;      // b value is 1    <= final Ans is 1 
    else
        cout << ++b;    
};
