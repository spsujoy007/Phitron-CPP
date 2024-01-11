#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> s;
    void push(int v)
    {
        s.push_back(v);
    }
    void pop()
    {
        s.pop_back();
    }
    int top()
    {
        return s.back();
    }
    int size()
    {
        return s.size();
    }
    bool empty()
    {
        if (size() == 0)
            return true;
        else
            return false;
    }
};

void check_equal(myStack st, myStack st2)
{
    if (st.size() == st2.size())
    {
        bool flag = true;
        while (!st.empty())
        {
            if (st.top() != st2.top())
            {
                flag = false;
                break;
            }
            st.pop();
            st2.pop();
        }
        if (flag == true)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
}

int main()
{
    myStack st;
    myStack st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    int n2;
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    check_equal(st, st2);

    return 0;
}