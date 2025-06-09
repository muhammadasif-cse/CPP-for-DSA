#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void complement(string position)
    {
        if (position == "first")
        {
            cout << name << " is a good boy and good in our school. But very naughty boy.";
        }
        else
        {
            cout << name << " is a good boy but very bad student in our school. And he is very naughty boy.";
        }
    }
};

int main()
{

    Student firstBoy("Asif", 1);
    cout << "Name: " << firstBoy.name << ", Roll: " << firstBoy.roll << endl;
    cout << "Teacher Complement: ";
    firstBoy.complement("first");
    Student lastBoy("Adnan", 100);
    cout << "Name: " << lastBoy.name << ", Roll: " << lastBoy.roll << endl;
    cout << "Teacher Complement: ";
    lastBoy.complement("last");
    return 0;
}