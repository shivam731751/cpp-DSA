#include <bits/stdc++.h>
#include <deque>
using namespace std;

// Deque: Double-ended queue

int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.emplace_front(60);
    dq.emplace_back(70);

    for (int dqs : dq)
    {
        cout << dqs << " ";
    }
    cout << endl;
    // reverse iterator in Deque
    for (auto it = dq.rbegin(); it != dq.rend(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    return 0;
}