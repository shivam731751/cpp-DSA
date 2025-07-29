#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << " vec.end : " << *(vec.end()) << endl;
    // using iterators to access elements in vector 
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
//  suing reverse iterator
    for (auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout << *(it) << " ";
        
    }
    return 0;
}