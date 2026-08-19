// Check Whether a String is Palindrome
#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int start = 0;
    int end = str.length() - 1;

    bool palindrome = true;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            palindrome = false;
            break;
        }

        start++;
        end--;
    }

    if (palindrome)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}
