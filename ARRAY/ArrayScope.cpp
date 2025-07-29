// #include <bits/stdc++.h>
// using namespace std;

// void update(int arr[], int n)
// {
//     cout << "inside the function" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     cout << "Goind Back to main function ";
// }

// int main()
// {

//     int arr[3] = {1, 2, 3};
//     update(arr, 3);

//     for (int i = 0; i < 3; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

void update (int arr[], int n){
    cout << endl << "Inside the function " << endl;

    for(int i=0; i<3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to min function" << endl;
}

int main () {

    int arr[3] = {1,2,3};
    update(arr,3);

    cout << endl << "Printing the array in main function" << endl;
    for(int i =0; i<3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}