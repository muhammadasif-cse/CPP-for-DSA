#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    string address;
    double gpa;
    int roll;
    string section;

    //* constructor
    // Student(string n, int a, string addr, double g, int r, string sec)
    // {
    //     name = n;
    //     age = a;
    //     address = addr;
    //     gpa = g;
    //     roll = r;
    //     section = sec;
    // }
};

int main()
{

    Student asif;
    cin >> asif.name >> asif.age >> asif.address >> asif.gpa >> asif.roll >> asif.section;
    cout << "Name: " << asif.name << endl;
    cout << "Age: " << asif.age << endl;
    cout << "Address: " << asif.address << endl;
    cout << "GPA: " << asif.gpa << endl;
    cout << "Roll: " << asif.roll << endl;
    cout << "Section: " << asif.section << endl;

    return 0;
}

/*
Asif 20 Dhaka 4.50 12345 A
*/