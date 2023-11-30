#include <iostream>

using namespace std;

int main()
{
    float num1 = 0.0, num2;

    cout << "Enter a Number : ";
    cin >> num2;

    float* hot;
    float* cold;

    hot = &num1;
    cold = &num2;

    *hot = *hot + 7.8;
    *cold = *cold - 14.2;

    cout << "Value of num1 : " << *hot << endl;
    cout << "Value of num2 : " << *cold << endl;

    cout << "Addision of Num1 and Num2 : " << *hot + *cold << endl;

    return 0;

}

