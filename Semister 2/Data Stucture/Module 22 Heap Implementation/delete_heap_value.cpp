#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
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

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_idx = (cur * 2) + 1;
        int right_idx = (cur * 2) + 2;
        int last_idx = v.size() - 1;
        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            // for two is available
            if (v[left_idx] >= v[right_idx && v[right_idx]] > v[cur])
            {
                swap(v[cur], v[left_idx]);
                cur = left_idx;
            }
            else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[cur])
            {
                swap(v[cur], v[right_idx]);
                cur = right_idx;
            }
            else
                break;
        }
        else if (left_idx <= last_idx)
        {
            if (v[left_idx] > v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else
                break;
        }
        else if (right_idx <= last_idx)
        {
            if (v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
                break;
        }
        else
            break;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    delete_heap(v);
    delete_heap(v);
    for (int val : v)
        cout << val << " ";

    return 0;
}