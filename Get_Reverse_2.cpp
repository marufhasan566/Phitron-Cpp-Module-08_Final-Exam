#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int cls;
    char s;
    int math_marks;
    int eng_marks;
};

int main()
{
    int n;
    cin >> n;

    Student students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].s >> students[i].math_marks >> students[i].eng_marks;
    }

    // Reverse the order of the students
    reverse(students, students + n);

    // Print the students data
    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].s << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
