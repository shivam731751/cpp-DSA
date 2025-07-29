#include <bits/stdc++.h>
#include <stack>
using namespace std;
// void stack() {

// }

int main() {
stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.emplace(40);

    stack<int>s2;
    s2.swap(s);
    cout << "size of S : " << s.size() << endl;
    cout << "size of s2 :" << s2.size() << endl;
 
    // cout << " top = " << s.top() << endl;
    // while(!s.empty()){
    //     cout << s.top() << " ";
    //     s.pop() ;
    // }
    cout << endl;
    return 0;
}