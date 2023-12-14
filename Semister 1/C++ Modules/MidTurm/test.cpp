#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int tMarks;
    Student(int id, char name[101], char section, int tMarks)
    {
        this->id = id;
        strncpy(this->name, name, sizeof(this->name));
        this->name[sizeof(this->name) - 1] = '\0';
        this->section = section;
        this->tMarks;
    }
};
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int Aid;
        char Aname[101];
        char Asection;
        int AtMarks;
        cin >> Aid >> Aname >> Asection >> AtMarks;
        Student A(Aid, Aname, Asection, AtMarks);
        int Bid;
        char Bname[101];
        char Bsection;
        int BtMarks;
        cin >> Bid >> Bname >> Bsection >> BtMarks;
        Student B(Bid, Bname, Bsection, BtMarks);
        int Cid;
        char Cname[101];
        char Csection;
        int CtMarks;
        cin >> Cid >> Cname >> Csection >> CtMarks;
        Student C(Cid, Cname, Csection, CtMarks);
        if (AtMarks >= BtMarks && AtMarks >= CtMarks)
        {
            cout << Aid << " " << Aname << " " << Asection << " " << AtMarks << endl;
        }
        else if (BtMarks >= AtMarks && BtMarks >= CtMarks)
        {
            cout << Bid << " " << Bname << " " << Bsection << " " << BtMarks << endl;
        }
        else
        {
            cout << Cid << " " << Cname << " " << Csection << " " << CtMarks << endl;
        }
    }
    return 0;
}