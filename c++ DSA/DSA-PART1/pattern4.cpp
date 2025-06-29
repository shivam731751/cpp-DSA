// #include <iostream>
// using namespace std;
// int main() {
//     int i=1;
//     int n=4;
//     while (i<=n)
//     {
//         int j = 1;
//         while(j<=i){
//             cout << i;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

// }

// ==========================================//
// #include <iostream>
// using namespace std;
// int main() {
//     int n=4;
//     int i=1;
//     while (i<=n){
//         int j=1;
//         while(j<=i){
//             cout << i;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// ======================for loop ============================//
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++){
        for(int j =0; j<i+1; j++){
            cout << (i+1)<< " ";
            
        }
        cout << endl; 
    }
};

