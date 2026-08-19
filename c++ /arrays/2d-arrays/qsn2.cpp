// Find the Sum of All Elements
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

    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    cout << "Sum = " << sum;

    return 0;
}
