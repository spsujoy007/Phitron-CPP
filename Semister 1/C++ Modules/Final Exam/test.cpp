// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int ar[3] = {5, 3, 2};
//     int l = 2;
//     for (int i = 0; i < 3; i++)
//     {
//         swap(ar[i], ar[l]);
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         cout << ar[i] << " ";
//     }

//     return 0;
// }
#include <iostream>
#include <algorithm>

using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        // Swap elements at start and end indices
        swap(arr[start], arr[end]);

        // Move indices towards the center
        start++;
        end--;
    }
}

int main()
{
    const int size = 5;
    int myArray[size] = {1, 2, 3, 4, 5};

    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }

    // Reverse the array using swap and array object
    reverseArray(myArray, size);

    cout << "\nReversed Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }

    return 0;
}
