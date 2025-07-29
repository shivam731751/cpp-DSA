#include <iostream>
#include <map>
using namespace std;


int main() {


    multimap<string , int> m;
    m.emplace("tv1", 100);
    m.emplace("tv2", 100);
    m.emplace("tv3", 100);
    m.emplace("tv4", 100);
    m.emplace("tv5", 100);
    m.emplace("tv6", 100);
    m.emplace("tv7", 100);
    m.emplace("tv8", 100);
    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
    m.erase(m.find("tv2"));

    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }

}