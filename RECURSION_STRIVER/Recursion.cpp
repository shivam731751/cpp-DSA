// // Ptint the name "Shivam" n times using recursion
// #include <bits/stdc++.h>
// using namespace std;

// void f(int i, int n)
// {
//     if (i > n)
//         return;
//     cout << ("Shivam") << " ";
//     f(i + 1, n);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     f(1, n);
//     return 0;
// };

//============================ stack overflow example =====================//

// #include <bits/stdc++.h>
// using namespace std;
// void f(){
//     cout << "Shivam" << " ";
//     f();
// }
// int main() {

//     f();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int cont = 0;
void fun(){
    if (cont == 10) return;
    cout << cont << endl;
    cont++;
    fun();
}
int main()
{
    fun();
    return 0;
}