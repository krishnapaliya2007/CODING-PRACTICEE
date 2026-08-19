// Find Sum of Each Column
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

    for (int j = 0; j < cols; j++)
    {
        int sum = 0;

        for (int i = 0; i < rows; i++)
        {
            sum = sum + arr[i][j];
        }

        cout << "Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}
