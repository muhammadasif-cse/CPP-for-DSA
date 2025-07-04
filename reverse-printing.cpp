#include <bits/stdc++.h>
using namespace std;

void rec(int idx, int n)
{
    if (idx > n)
    {
        return;
    }
    // cout << " " << idx;
    rec(idx + 1, n);
    cout << idx << " ";
}

int main()
{

    int n;
    cin >> n;

    rec(1, n);
    return 0;
}