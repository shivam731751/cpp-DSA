#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m["laptop"] = 50000;
     m["laptop"] = 510000;
    m["phone"] = 12000;
    m["charger"] = 1500;
    m["cable"] = 800;

    // m.erase("laptop");
    m.insert({{"camera", 45000}});
    m.emplace("i phone 12", 35000);

    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }
    // cout << "count =  " << m.count("laptop") << endl;
    if(m.find("laptop") != m.end()){
        cout << "Found\n";
    } else{
        cout << "Not Found\n";
    }
  
    // cout << m["laptop"] << endl;
    cout << endl; 
    return 0;
}