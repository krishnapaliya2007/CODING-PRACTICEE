// Move all zeros to the end of the array, while keeping the order of the non-zero elements the same.
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int index = 0;

    // Put all non-zero elements at the beginning
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    // Put zeros in the remaining positions
    while (index < n)
    {
        arr[index] = 0;
        index++;
    }

    cout << "Array after moving zeros: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
