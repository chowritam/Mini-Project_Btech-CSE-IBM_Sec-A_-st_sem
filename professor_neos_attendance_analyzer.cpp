#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int attendance[n];
    cout << "Enter attendance (1 for present, 0 for absent): ";
    for (int i = 0; i < n; i++) 
    {
        cin >> attendance[i];
    }

    int presentCount = 0, absentCount = 0;

    for (int i = 0; i < n; i++) 
    {
        if (attendance[i] == 1)
            presentCount++;
        else if (attendance[i] == 0)
            absentCount++;
    }

    cout << "\nTotal Present: " << presentCount;
    cout << "\nTotal Absent: " << absentCount << endl;

    return 0;
}
