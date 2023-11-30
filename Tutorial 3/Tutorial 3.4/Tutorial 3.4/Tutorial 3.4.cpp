#include <iostream>

using namespace std;

void print(int len, int wth);
void input(int &len, int &wth);


int main()
{
	
	int length = 10, width = 5;


	input(length, width);
	print(length, width);


	return 0;

}
void print(int len, int wth) {

	cout << "Length : " << len << " , Width " << wth << endl;


}
void input(int &len, int &wth) {

	cout << "Length : " << len << " , Width " << wth << endl;

}
