#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        v.push_back(n);
        int current_idx = v.size() - 1;
        while (current_idx != 0)
        {
            int parent_idx = (current_idx - 1) / 2;
            // if (v[parent_idx] > v[current_idx]) // > for min heap;
            if (v[parent_idx] < v[current_idx]) // < for max heap;
                swap(v[parent_idx], v[current_idx]);
            else
                break;
            current_idx = parent_idx;
        }
    }
    for (int val : v)
        cout << val << " ";
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }

    for (int val : v)
        cout << val << " ";

    return 0;
}