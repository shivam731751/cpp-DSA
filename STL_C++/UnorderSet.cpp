#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset< int> s;
    s.emplace(100);
    s.emplace(10);
    s.emplace(20);
    s.emplace(20);

    cout << s.size() << endl; 
    for (auto val : s)
    {
        cout << val <<" ";
    }


    cout << endl;

    // cout << "Lover bound = "<<  *(s.lower_bound(10)) << " " ;      // not working UndorderSet
    //  cout << "upper bound = "<<  *(s.upper_bound(10)) << " " ;     // not working UndorderSet
    return 0;
}