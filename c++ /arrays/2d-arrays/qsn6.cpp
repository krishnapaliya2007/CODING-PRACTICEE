// Search an Element in a Matrix
#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    int arr[100][100];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    int target;
    cin >> target;

    bool found = false;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Found at row " << i
                     << ", column " << j;

                found = true;
                break;
            }
        }

        if (found)
        {
            break;
        }
    }

    if (!found)
    {
        cout << "Element not found";
    }

    return 0;
}
