#include <iostream>

using namespace std;

long Factorial(int no);
long nCr(int n, int r);

int main()
{
        int n, r;

        cout << "Enter a value for n : ";
        cin >> n;

        cout << "Enter a value for r  : ";
        cin >> r;

        if (r < 0 || n < 0) {

            cout << "Invalid Input : " << endl;

        }//checks whether the inputs are not negetive to run
        else {

            long result = nCr(n, r);//calling the function

            cout << "nCr(" << n << "," << r << ") = " << result << endl;//display the result
        }

        return 0;

}
long Factorial(int no) {

    if (no == 0 || no == 1) {

        return 1;

    }//checks whether number is 0 because factorial of 1 and 0 is 1
    
    long result = 1;

    for (int i = 2; i <= no; ++i) {

        result = result + i;
    }

    return result;

}
long nCr(int n, int r) {

    if (r < 0 || r > n) {

        return 0;//invalid input
    }//checks for validity

    return Factorial(n) / (Factorial(r) * Factorial(n - r));//this is the formula of nCr


}


