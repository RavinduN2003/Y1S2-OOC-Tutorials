#include <iostream>

using namespace std;

int minimum(int num1, int num2);
int maximum(int num1, int num2m);
int multiply(int num1, int num2);

int main()
{
    int n1,nu2;

    cout << "Enter Two Numbers : "<<endl;
    cin >> n1 >> nu2;

    cout << "The miniu Value : " << minimum(n1, nu2) << endl;
    cout << "The Maximum Value : " << maximum(n1, nu2) << endl;
    cout << "The multiplication is : " << multiply(n1, nu2) << endl;


}
int minimum(int num1, int num2) {

    int min = 0;

    if (num1 < num2) {

        min = num1;
    }
    else {

        min = num2;
    }

    return min;

}
int maximum(int num1, int num2) {

    int max;

    if (num1 > num2) {

        max = num1;
    }
    else {

        max = num2;
    }

    return max;

}
int multiply(int num1, int num2) {

    return num1 * num2;
}