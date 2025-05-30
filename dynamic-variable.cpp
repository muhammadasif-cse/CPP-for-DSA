#include <bits/stdc++.h>

using namespace std;

//* basic for declare dynamic variable
// int main()
// {
//     int x = 10;
//     int *p = new int;
//     *p = 100;
//     cout << *p << endl;
//     return 0;
// }

int *p;

int fun()
{
    int x = 10;
    p = &x;
    cout << "Fun ->" << *p << endl;
}
int main()
{
    int y = fun();
    cout << "Main ->" << *p << endl;
    return 0;
}