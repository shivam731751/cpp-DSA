
// ============= AND(&) OR(|) NOT(~) XOR(^) ===================//
#include <iostream>
using namespace std;
int main() {
int a =2;
int b = 3;
cout << "AND(&) =>"<<  (a & b) << endl ; // <= 2 ==== Ans
cout << "OR(|) =>"<<   (a|b) << endl;    // <= 3 ====Ans
cout <<"NOT(~) =>"<<  (~a) << endl;    // <= -3 ====Ans
cout << "XOR(^) =>"<< (a^b) << endl << endl;    // <= 1 ====Ans


// ================ (left sift <<)( right sift >>) ===================//
cout <<">>"<<  (17>>1) << endl;
cout <<">>"<<  (17>>2) << endl;
cout <<"<<"<<  (19<<1) << endl;
cout <<"<<"<<  (19<<2) << endl;

}