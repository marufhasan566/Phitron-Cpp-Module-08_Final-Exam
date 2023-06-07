#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int cls;
    char s;
    int id;
};

void reverseID(Student &student)
{
    int temp = student.id;
    student.id = temp % 10;
    temp /= 10;
    student.id = student.id * 10 + temp % 10;
    temp /= 10;
    student.id = student.id * 10 + temp % 10;
    temp /= 10;
    student.id = student.id * 10 + temp % 10;
}

int main()
{
    int n;
    cin >> n;

    Student students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].s >> students[i].id;
    }

    for (int i = 0; i < n; i++)
    {
        reverseID(students[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].s << " " << students[i].id << endl;
    }

    return 0;
}
