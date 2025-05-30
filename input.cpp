#include <iostream>

using namespace std;

int main()
{

    int num;

    cout << "Please enter your num: ";
    cin >> num;

    cout << "Your number is: " << num << endl;

    // typecasting
    char c;
    cout << "Please enter your favorite character: ";
    cin >> c;

    cout << "Your favorite character is: " << c << endl;
    cout << "Your favorite character ascii value is: " << (int)c;
}