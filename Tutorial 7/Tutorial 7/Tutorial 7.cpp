#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
	int studentId;
	string name;//string is a data type used to represent strings of characters

public:
	void assignDetails(int id,const string& n);//use referance variable to connect directly with the object
	//we use const to prevent changes

	void display();
};

void Student::assignDetails(int id, const string& n) {

	studentId = id;
	name = n;
	
}
void Student::display() {

	cout << "The Student Id is : " << studentId << endl;
	cout << "The student Name is : " << name;
}
int main()
{
	Student std1;//creating object

	std1.assignDetails(1234,"ravindu");//pass arguments to the function
	std1.display();//show the output

	//creating a second object as a dynamic object
	Student* std2 = new Student;

	cout << endl;

	//assign values to std2 using assignDetails method
	std2->assignDetails(1233, "coppa");

	//display values using the display method
	std2->display();

	delete std2;

	return 0;

}
