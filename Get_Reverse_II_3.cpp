#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    struct Student
    {
        string name;
        int cls;
        char section;
        int id;
    };

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }

    for (int i = 0; i < n / 2; i++)
    {
        swap(students[i].id, students[n - 1 - i].id);
    }

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << endl;
    }

    return 0;
}
