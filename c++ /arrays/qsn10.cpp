// Swap the first and last elements
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Swapping first and last elements
    int temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;

    cout << "Array after swapping: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
