#include <iostream>

using namespace std;

int main()
{
  
	int n,sum;
	

	cout << "Enter the nth Number : ";
	cin >> n;

	for (int i = 1; i < n; i++) {


		sum = sum + i;
	}

	cout << "The sum of the numbers from 1 to "<< n << " is  : "  << sum << endl;

	return 0;

}
