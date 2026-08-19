// Print Main and Secondary Diagonal
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Main diagonal: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i][i] << " ";
    }

    cout << endl;

    cout << "Secondary diagonal: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i][n - 1 - i] << " ";
    }

    return 0;
}
