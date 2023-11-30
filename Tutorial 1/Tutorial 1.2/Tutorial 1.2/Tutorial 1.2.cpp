#include <iostream>

using namespace std;

int main()
{
	float dis,cost;

	cout << "Enter the Distance Travelled by van : ";
	cin >> dis;

	if (dis <= 30) {


		cost = dis * 50;
	}
	else {

		cost = (30 * 50) + (dis - 30) * 40;

	}

	cout << "The Cost is : " << cost<<endl;














}

