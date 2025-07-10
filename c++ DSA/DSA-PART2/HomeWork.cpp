#include <bits/stdc++.h>
using namespace std;

int ap(int a, int p, int s)
{
    int sum = a * p + s;
    // cout << "the totle is." << sum << endl;
    return sum;
}

int main()
{

    int a;
    int p;
    int s;
    cin >> a >> p >> s;
    int sum = ap(a, p, s);
    cout << "the totle is." << sum << endl;
};
