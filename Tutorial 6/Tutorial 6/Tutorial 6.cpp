#include <iostream>

using namespace std;

int main()
{
    float number1 = 6.2;
    float number2 = 7.3;

    float* fptr;
    fptr = &number1;

    cout << "Value of Object pointed by fptr : " << *fptr << endl;
    
    *fptr = number2;
    
    cout << "Value of number2 : " << *fptr << endl;

    cout << "Address of Number1 : " << &number1<< endl;
    cout << "Address print in the fptr : " << fptr<< endl;


    return 0;



}
