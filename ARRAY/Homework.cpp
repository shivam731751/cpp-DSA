// #include <bits/stdc++.h>
// using namespace std;

// void update(){
//     int arr[5]={2,7,1,-4,11};

//     for(int i=0; i<5; i++){
//         int sum=1;
//         cout << arr[i] << " ";
//        sum +=arr[i];
//     }
// }

// int main() {
// update();

// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;
    int marks[size];

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }
}