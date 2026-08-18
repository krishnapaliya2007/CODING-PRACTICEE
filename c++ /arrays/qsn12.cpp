// Given a sorted array, remove duplicate elements.
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements in sorted order: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < n; i++)
    {
        // Print the element if it is the first element
        // or if it is different from the previous element
        if (i == 0 || arr[i] != arr[i - 1])
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
