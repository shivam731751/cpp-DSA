#include <iostream> 
using namespace std; 
int main() {
    int n=4;
    int i=1; 
    while (i<=n){
        // cout << i;
        int j=1;
        while(j<=i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}


// ==========================================================try Triangle pattern in for loop ==============================//
// #include <iostream> 
// using namespace std;
// int main() {
//     int n =4; 
//    string str = "*";
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout << "*" << " ";
            
//         }
//         cout << endl; 
//     }
// }

// // *          <= output:  ( finally i got the output but normal the see video just a normal misteck my code in  innerloop (j<i+1;) )
// // * * 
// // * * * 
// // * * * * 