#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    Student students[n];

    for (int i = 0; i < n; i++)

    {
        cin.ignore();
        getline(cin, students[i].name);
        cin >> students[i].roll >> students[i].marks;
    }
    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
    }

    return 0;
}