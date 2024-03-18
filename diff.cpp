#include <iostream>
#include <string>
using namespace std;

string fun(string s1, int shift)
{
    string s2 = s1;
    for (int i = 0; i < s1.length(); i++)
    {
        char currentChar = s1[i];

        // Check if the character is an uppercase letter
        if (currentChar >= 'A' && currentChar <= 'Z')
        {
            s2[i] = ((currentChar - 'A' + shift) % 26) + 'A';
        }
        // Check if the character is a lowercase letter
        else if (currentChar >= 'a' && currentChar <= 'z')
        {
            s2[i] = ((currentChar - 'a' + shift) % 26) + 'a';
        }
    }
    return s2;
}

int main()
{
    string s;
    int shift;

    cout << "Enter the string: ";
    cin >> s;

    cout << "Enter the shift value: ";
    cin >> shift;

    cout << "Encrypted string: " << fun(s, shift) << endl;

    return 0;
}
