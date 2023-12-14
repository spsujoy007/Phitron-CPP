#include <bits/stdc++.h>
using namespace std;

class Product
{
public:
    string name;
    int price;
    int quantity;
    void chgQuantity(int quantity)
    {
        this->quantity = quantity;
    }
};

int main()
{
    int n;
    cin >> n;
    Product a[n];
    for (int i = 0; i < n; i++)
    {
        // Product pr = a[i];
        cin >> a[i].name >> a[i].price >> a[i].quantity;
    }

    for (int i = 0; i < n; i++)
    {
        Product pr = a[i];
        cout << pr.name << " " << pr.price << " " << pr.quantity << endl;
    }
    return 0;
}