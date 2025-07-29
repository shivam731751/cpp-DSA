#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n ){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size ){
    for(int i =0; i<size; i+=2){
        if(i+1 <size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main() {

    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {11,33,9,76,43};

    swapAlternate(even, 8);
    printArray(even, 8);
   
}




// #include <iostream>
// using namespace std;

// int main() {
//     int n = 3; // यह मिडलाइन की आधी ऊंचाई है (excluding duplicate middle line)

//     // Upper part of the diamond (including the middle line)
//     for (int i = 1; i <= n; ++i) {
//         // Print leading spaces
//         for (int j = 1; j <= n - i; ++j)
//             cout << " ";
//         // Print stars
//         for (int j = 1; j <= 2 * i - 1; ++j)
//             cout << "*";
//         cout << endl;
//     }

//     // Lower part of the diamond (excluding the middle line again)
//     for (int i = n; i >= 1; --i) {
//         // Print leading spaces
//         for (int j = 1; j <= n - i; ++j)
//             cout << " ";
//         // Print stars
//         for (int j = 1; j <= 2 * i - 1; ++j)
//             cout << "*";
//         cout << endl;
//     }

//     return 0;
// }
