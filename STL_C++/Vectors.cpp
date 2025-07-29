#include <bits/stdc++.h>
// #include <vector>
using namespace std;

int main()
{

     vector<int> vec = {10, 20, 30, 40, 50};
     vector<int> only(10, 20);
     // vec.push_back(52); // add thevalue at the end of the vector
     // vec.push_back(25);
     // vec.push_back(10);
     // cout << "Size of vector is=>" <<  vec.size() << endl;
     // cout << "capacity of vector is=> " << vec.capacity() << endl;
     // cout << "Element at index 2 is => " << vec.at(2) << endl; // access element at index 2
     // cout << "Element at index 1 is => " << vec[1] << endl; // access element at index 0
     // cout << "Front element is => " << vec.front() << endl; // access first element
     // cout << "Back element is => " << vec.back() << endl; // access last element
     // cout << "Before poping last element => " << vec.size() << endl;
     // vec.pop_back(); // remove last element
     // cout << "After poping last emement => " << vec.size() << endl;
     // cout << "Before clearing vector => " << vec.size() << endl;
     // vec.clear(); // clear all elements in vector
     // cout << "After clearing vector => " << vec.size() << endl;


     for (int onl : only)
     {
          cout << onl << " " ;
     }
     cout << endl;

     
     for (int vel : vec)
     {
          cout << vel << " ";
     }
     cout << endl;
     return 0;
}