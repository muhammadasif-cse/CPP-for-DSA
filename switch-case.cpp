#include <iostream>

using namespace std;

int main()
{
    int day;
    cout << "Please enter your number of day: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Sunday" << endl;
        break;
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
    case 4:
        cout << "Wednesday" << endl;
        break;
    case 5:
        cout << "Thursday" << endl;
        break;
    case 6:
        cout << "Friday" << endl;
        break;
    case 7:
        cout << "Saturday" << endl;
        break;
    default:
        cout << "Please enter a valid day of number" << endl
             << "Must be day of number 1 to 7" << endl;
    }
}