#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    string courseYrSec;
    string birthday;
    string motto;

    cout << "Input Full name: ";
    getline(cin, fullName);

    cout << "Input Course, Yr. & Sec.: ";
    getline(cin, courseYrSec);

    cout << "Input Birthday: ";
    getline(cin, birthday);

    cout << "Input Motto/Motivation in Life: ";
    getline(cin, motto);

    cout << "\nHi! I'm " << fullName << " of " << courseYrSec << ". Welcome to Data Structures and Algorithm!" << endl;
    cout << "My Birthday is on " << birthday << ". and my motto/motivation in life is " << motto << endl;

    return 0;
}
