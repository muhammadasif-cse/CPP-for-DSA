#include <bits/stdc++.h>

using namespace std;

//* static array
// int main()
// {
//     int a[5];

//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// * dynamic array
int main()
{
    int *a = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}