// Find Maximum and Minimum Element
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

    int maximum = arr[0][0];
    int minimum = arr[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maximum)
            {
                maximum = arr[i][j];
            }

            if (arr[i][j] < minimum)
            {
                minimum = arr[i][j];
            }
        }
    }

    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum << endl;

    return 0;
}
