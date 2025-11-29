#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the number of subjects: ";
    cin >> n;

    int marks[n];

    cout << "Enter the marks of the subjects: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> marks[i];
    }

    int MAX = marks[0];
    int MIN = marks[0];

    for (int i = 1; i < n; i++) 
    {
        if (marks[i] > MAX) 
        {
            MAX = marks[i];
        }
        if (marks[i] < MIN) 
        {
            MIN = marks[i];
        }
    }

    cout << "\nHighest = " << MAX;
    cout << "\nLowest = " << MIN;

    return 0;
}
