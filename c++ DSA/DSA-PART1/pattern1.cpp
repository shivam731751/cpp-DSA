#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int m = 5;
        while (j <= m)
        {
            cout << m-j+1;
            j++;
        }
        cout << endl;
        i++;
    }
}

// ans=> 54321
     //  54321
    //   54321



// ==============================second type of pattern with while loop =================//

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 3;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         int m = 5;
//         while (j <= m)
//         {
//             cout << j;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }


// ans=> 12345
//       12345
//       12345