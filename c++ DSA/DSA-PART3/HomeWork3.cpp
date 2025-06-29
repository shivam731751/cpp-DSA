#include <iostream> 
using namespace std;
int main() {
    for(int i=0; i<=15; i+=2){      // i value 0,2,4,6,8,10,12,14
        cout << i << " " ;

        if(i&1){
            continue;
        }
        i++;
    }
};
