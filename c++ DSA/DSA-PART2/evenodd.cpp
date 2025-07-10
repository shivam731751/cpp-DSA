#include <bits/stdc++.h>
using namespace std;
bool isEvent(int a){
    if(a&1){
        return 0; 
    }
    else {
        return 1;
    }
}
int main() {
    int num;
    cin>> num ;
    if(isEvent(num)){
        cout << "Number is Even" << endl;

    } else {
        cout  << "Number is odd" << endl; 
    }
}


// next => 46:42  nCr