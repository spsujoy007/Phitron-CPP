#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;
    Students(int id, const char name[101], char section, int total_marks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->total_marks = total_marks;
    }
};

int main()
{
    // welcome to the program sp, let's do some hack;
    int n;
    cin >> n;
    for (int tc = 0; tc < n; tc++)
    {
        int id1, total_marks1;
        char name1[101], section1;

        int id2, total_marks2;
        char name2[101], section2;

        int id3, total_marks3;
        char name3[101], section3;

        cin >> id1 >> name1 >> section1 >> total_marks1;
        cin >> id2 >> name2 >> section2 >> total_marks2;
        cin >> id3 >> name3 >> section3 >> total_marks3;
        Students getStudents[3] = {
            Students(id1, name1, section1, total_marks1),
            Students(id2, name2, section2, total_marks2),
            Students(id3, name3, section3, total_marks3)};

        int max = INT_MIN, maxID = 0;
        for (int i = 0; i < 3; i++)
        {
            if (max < getStudents[i].total_marks)
            {
                max = getStudents[i].total_marks;
                maxID = i + 1;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (maxID == getStudents[i].id)
            {
                cout << getStudents[i].id << " " << getStudents[i].name << " " << getStudents[i].section << " " << getStudents[i].total_marks;
            }
        }
        cout << endl;
    }

    return 0;
} // radhe radhe