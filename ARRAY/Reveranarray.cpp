#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n) {

    int start = 0;
    int end  = n -1;
 while(start <= end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
 }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main() {
    
   int arr[6] = {1,2,3,4,5,6};
   int brr[5]= {2,6,3,9,4};

   reverse (arr, 6);
   reverse(brr,5);

   printArray(arr,6);
   printArray(brr,5);


   return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// void nForest(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//    cout << endl;
// }

// int main() {
// nForest(3);
// }