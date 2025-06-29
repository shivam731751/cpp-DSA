#include <iostream>
using namespace std;
int main() {
    int a = 1 ; 
    int b = 2;
    if(a-- > 0 && ++b >2 ){                // a-- the a value is 1 AND ++b the value of b is 3  the b value 3  condition is true then  print (Stage1 - Inside if );
        cout << "Stage1 - Inside if "; 
    } else {
        cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;        // a value is 0 AND  b value is 3  then currect and is ==> ( Stage1 - Inside if 0 3 );
}