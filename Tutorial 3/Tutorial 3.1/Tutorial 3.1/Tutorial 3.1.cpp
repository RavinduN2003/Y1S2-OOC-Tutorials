#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    float marks[] = { 78.4,90.6,45.9,72.2,54.4 };
    char names[][20] = { "Ajith","Wimal","Knthi","Suranji","Kushmitha" };

    cout << setw(5) << "No" << setw(15) << "Name" << setw(10) <<"Marks" << endl;
    
    for (int i = 0; i < 5; i++) {

        cout << setw(5) << i + 1 
            << setw(15) << names[i] 
            << setw(10) << setprecision(2) << marks[i] <<endl;

    }

    return 0;
}

