#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        
        cout << arr[i] << " ";
    }
    cout << "Printing array cmpleted!" << endl;
}

int main()
{
    // ===================== first array =====================//

    int first[15] = {2, 7};
    int size = 15;
    printArray(first, size);

    // ==================== second array ======================//
    int second[3] = {5, 7, 11};
    size = 3;
    printArray(second, size);

    // ==================== third array =======================//
    int third[10] = {0};
    size = 10;
    printArray(third, size);

    // int number[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 21};
    // cout << "Value at 14 index is:" << number[14] << endl;

    // //    ==================== second array =====================//
    // int second[3] = {1, 2, 3};
    // cout << "Value at 2 index is: " << second[2] << endl;

    // // ===================== third array =============================//
    // int third[15] = {2, 7};
    // // int n = 3;
    // int n = 15;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << third[i] << " ";
    // }

    // // ======================== fourth array ==========================//
    // int fourth[10]={0};
    //  n = 10;
    // for (int i = 0; i<n; i++) {
    //     cout   <<  fourth[i] << " ";
    // }
}
