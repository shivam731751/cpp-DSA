// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 10;
//     int a = 0;
//     int b = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         int nextnumber = a + b;
//         cout << nextnumber << " ";
//         a = b;
//         b = nextnumber;
//     }

//     cout << a << " " << b;
// }
// ==============================34:38 fibonacci seriese question start se  =====================//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "inter a n number" << endl ;
    cin >> n;

    bool isPrime = 1; 

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // cout << " Not a Prime Number !";
            isPrime = 0;
            break;
        }
    }
    if(isPrime ==0){
        cout << "Not a Prime Number" << endl ;
    } else  {
        cout << "is a Prime Number " << endl ;
    }
}