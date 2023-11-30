
#include <iostream>

using namespace std;

int main()
{
    int no;
    long fac;

    cout << "Enter a Number : ";
    cin >> no;

    fac = 1;

    for (int i = no; i >= 1; i--) {

        fac = fac * i;

    }

    cout << endl << "The Factorial of number " << no << " is : " << fac;

    return 0;
}

