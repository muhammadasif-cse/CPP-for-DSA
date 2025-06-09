#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Using the reverse function from the algorithm library
    // reverse function from the algorithm library
    reverse(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    string s;
    cin >> s;
    // Using the reverse function from the algorithm library
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}