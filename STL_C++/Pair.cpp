#include <bits/stdc++.h>
using namespace std;
 

int main() {
    // pair<int, string> p1 ={ 10, "Hello"};
    // cout << " First element is: " << p1.first << endl;
    // cout << "second element is " << p1.second << endl;

    pair<int, pair<char, int>> p = {11,{'a', 2}};
    cout << "first pair is " << p.first<< endl;
    cout << " Second.first pair is "<<p.second.first << endl;


    vector<pair<int, int >> vec = {{1, 2}, {3, 4}, {5, 6}};

    vec.push_back({7, 8});
    vec.emplace_back(9, 10);

    for(auto p : vec) {
        cout << "First:" << p.first << ", Second : " <<p.second<< endl;
    }

}


// Next chapter is push vs emplace time 36:36 
 