#include <iostream>
using namespace std;

// void Printhello(){            // <= ==================== void is not return in any think ==================//
int Printhello()
{
    cout << " Hello!\n";
    return 3;
}

// ===================== Sum of a and b ========================//

int sum(int a, int b)
{
    int s = a + b;
    return s;
}

// =========================double value ==============================//

double sum2(double a, double b)
{
    double s = a + b;
    return s;
}

//====================================== minimum or two number====================//

int minoftwo(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}



// ===================== Calculate sum of n number ================/

int sumN(int n ){
    int calcu = 0;
    for (int i=0; i<=n; i++){
        calcu+=i;
        
    }
    return calcu;
}


// ======================== N factorial ====================//
int factoN(int n ){
    int fact =1 ;
    for(int i =1; i<=n; i++){
    fact *=i;
    }
    return fact ; 
}

int main()
{
    int value = Printhello();
    cout << "value is: " << value;
    Printhello();
    Printhello();

    cout <<"Sum value "<<  sum(10, 5) << endl;
    cout << " Sume2 value " << sum2(10.99, 9.99) << endl;
    cout << "Min =" << minoftwo(30,20) << endl ;
    cout << " sumN value " <<  sumN(5) << endl;
    cout << " factorial n value is " << factoN(5) << endl;

    return 0;
}
