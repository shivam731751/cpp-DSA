#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i<=5; i++){    // this my loop is ruinng 5 time 
        cout << i << " ";  // this my output print is i value 0,1,2,3,4,5;
        i++;               // then i++ running i think outuput is 0,2,4 ( unexpected value )
    };
}