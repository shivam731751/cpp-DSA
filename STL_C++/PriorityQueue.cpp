#include <iostream>
#include <queue>  
using namespace std;

// .push,emplace .top .pop .size .empty
int main()
{
    priority_queue<int, vector<int>, greater<int>> q;    // rever order sentex
    // priority_queue<int> q;
    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);
    while (!q.empty())
    {
        cout << q.top() << " ";      // every time bigest value is top printing 
        q.pop();
    }
    cout << endl;
    return 0;
}