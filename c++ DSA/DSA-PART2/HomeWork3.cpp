#include <bits/stdc++.h>
using namespace std;

int update(int a)
{
    int ans = a * a;    // output is 196;
    return ans;
}

int main()
{
    int a = 14;
    a = update(a);      // return value is here 196 then hold the return value is a 
    cout << a << endl;    // output is 196;
}