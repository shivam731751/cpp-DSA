#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> m;
    m.emplace("tv" , 100);
    m.emplace("laptop" , 10);
    m.emplace("charger" , 20);
    m.emplace("cable", 20);

    for(auto p : m){
        cout << p.first << endl;
        cout << p.second << endl;
    }
    cout << endl;
    return 0;
}