	// Print numbers 1 to N and then N to 1
#include <iostream>
using namespace std;

void print(int n, int i)
{
    if (i > n)
        return;

    cout << i << " ";

    print(n, i + 1);

    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;

    print(n, 1);

    return 0;
}
