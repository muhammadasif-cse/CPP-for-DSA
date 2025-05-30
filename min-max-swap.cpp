#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a = 4, b = 6, c = 3, d = 13;

    // get min number
    int min_number = min({a, b, c, d});
    cout << "Your min number is: " << min_number << endl;

    // get max number
    int max_number = max({a, b, c, d});
    cout << "Your max number is: " << max_number << endl;

    // swap of number
    swap(a, b);
    cout << "After swap, a = " << a << ", b = " << b << endl;
}