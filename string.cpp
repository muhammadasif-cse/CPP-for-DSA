#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // string without space
    string s;
    // cin >> s;                                      // input "Hello World"
    // cout << "String without space: " << s << endl; // output "Hello"

    // cin.ignore(); // ignore leftover newline

    // string with space
    string s2;
    getline(cin, s2);                            // input "Hello World"
    cout << "String with space: " << s2 << endl; // output "World"

    return 0;
}