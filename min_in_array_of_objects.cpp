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

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].roll >> students[i].marks;
    }

    // for only print marks
    // int min_mark_student = INT_MAX;

    // if you full student object details print
    Student min_mark_student;
    min_mark_student.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // min_mark_student = min(students[i].marks, min_mark_student);

        // if you full student object details store
        if (students[i].marks < min_mark_student.marks)
        {
            min_mark_student = students[i];
        }
    }
    // cout << min_mark_student << endl;
    cout << min_mark_student.name << " " << min_mark_student.roll << " " << min_mark_student.marks << endl;
    return 0;
}