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
    Student(string name, int age, string address, double gpa, int roll, string section)
    {
        this->name = name; // Using 'this' pointer to refer to the current object's members
        this->age = age;
        this->address = address;
        this->gpa = gpa;
        this->roll = roll;
        this->section = section;
    }
};

int main()
{

    Student asif("Muhammad Asif", 20, "Dhaka", 4.50, 12345, "A");
    cout << "Name: " << asif.name << endl;
    cout << "Age: " << asif.age << endl;
    cout << "Address: " << asif.address << endl;
    cout << "GPA: " << asif.gpa << endl;
    cout << "Roll: " << asif.roll << endl;
    cout << "Section: " << asif.section << endl;

    return 0;
}
