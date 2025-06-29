#include <iostream> 
using namespace std;
int main() {
    char ch = 'A';
    int n =3;
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

// A B C  <= output 
// D E F 
// G H I 

// #include <iostream> 
// using namespace std;
// int main() {
//     int n = 4;
//     for (int i =1; i<=n; i++){
//         for (int j=1; j<i+1; j++){
//             cout << j<< " ";
//         }
//         cout << endl;
//     }
// }