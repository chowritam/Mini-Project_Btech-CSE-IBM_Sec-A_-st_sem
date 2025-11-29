#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    cout << "Enter a string: ";
    getline(cin, word);

    // Preprocess the string: remove non-alphanumeric characters and convert to lowercase
    string processed;
    for (char c : word) {
        if (isalnum(c)) {
            processed += tolower(c);
        }
    }

    int len = processed.length();
    bool isPalindrome = true;

    for (int i = 0; i < len / 2; i++)
    {
        if (processed[i] != processed[len - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Perfect Secret Word";
    else
        cout << "Not a Secret Word";

    return 0;
}
