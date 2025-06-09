#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersey;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{
    Cricketer *dhoni = new Cricketer("India", 100);
    Cricketer *kohli = new Cricketer("Kohli", 18);
    // copy object one by one
    // kohli->country = dhoni->country;
    // kohli->jersey = dhoni->jersey;

    *kohli = *dhoni; // best way

    delete dhoni;

    cout << kohli->country << " " << kohli->jersey << endl;
    return 0;
}