#include <bits./stdc++.h>
using namespace std;

int update(int a)
{
    a -= 5;        // output is 10 ; 
    // cout << " out put is " << a << endl;
    return a;
}

int main()
{

    int a = 15;
    update(a);
    cout << a << endl;     // output is 15;
}