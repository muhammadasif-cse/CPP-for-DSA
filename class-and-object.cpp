#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int roll;
    double gpa;
};

int main()
{
    Student student;
    student.name = "Muhammad Asif";
    student.age = 20;
    student.roll = 12345;
    student.gpa = 4.50;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Roll: " << student.roll << endl;
    cout << "GPA: " << student.gpa << endl;
    return 0;
}