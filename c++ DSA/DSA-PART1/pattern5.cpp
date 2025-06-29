// #include <iostream>
// using namespace std;
// int main() {
//     int row=1;
//     int n = 5;
//     while(row <=n){
//         int col =1;
//         int value = row ;
//         while (col<=row ){
//             cout << value ;
//             value ++;
//             col ++;
//         }
//         cout << endl;
//         row++;
//     }
// }

// ==================self trying to this code =======================//
#include <iostream>
using namespace std;
int main()
{
  int n = 5;
  int row = 1;
  while (row <= n)
  {
    int col = 1;
    int value = row;
    while (col <= row)
    {

      cout << value;
      value++;
      col++;
    }
    cout << endl;
    row++;
  }
}
