// Find the Missing Number
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter N: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n - 1 << " elements: ";

    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    // Calculate expected sum from 1 to N
    int expectedSum = n * (n + 1) / 2;

    // Calculate actual sum of array
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        actualSum = actualSum + arr[i];
    }

    // Find missing number
    int missing = expectedSum - actualSum;

    cout << "Missing number = " << missing;

    return 0;
}
