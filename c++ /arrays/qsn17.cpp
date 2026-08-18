// Find the Duplicate Number
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

    int duplicate = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = arr[i];
                break;
            }
        }

        if (duplicate != -1)
        {
            break;
        }
    }

    if (duplicate != -1)
    {
        cout << "Duplicate = " << duplicate;
    }
    else
    {
        cout << "No duplicate found";
    }

    return 0;
}
