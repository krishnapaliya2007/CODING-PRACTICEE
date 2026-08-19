// Count Vowels and Consonants
#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int vowels = 0;
    int consonants = 0;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;

    return 0;
}
