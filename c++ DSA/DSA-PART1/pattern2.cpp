// #include <iostream> 
// using namespace std;
// int main() {
//     int n = 5;
//     int i=1;
//     int count =1;
//     while(i<=n){

//         int j=1;
//         while(j<=n){
//             cout << count <<" " ;
//             count = count +1;
//             j=j+1;
//         }
//         cout << endl;
//         i=i+1;
//         }
// }


//=============================  trying to self pattern prining number 1 to 10 lines =============================//
#include <iostream> 
using namespace std ;
int main() {
    int n =10;
    int i=1;
    int count =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << count << " ";
           count ++;
           j++;
        }
        cout << endl;
        i++;
    }
}
