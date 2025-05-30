#include <iostream>

using namespace std;

int main()
{
    int money;
    cout << "Please provide your amount for withdraw: ";
    cin >> money;

    if (money >= 1000)
    {
        cout << "Every 1000tk Charge of 18.50 tk has to be withdraw" << endl;
        int persent = money / 1000;
        int charge = persent * 18.50;
        cout << "Successfully withdraw your amount: " << money - charge << endl;
    }
    else
    {
        cout << "Successfully withdraw your amount: " << money << endl;
    }
}