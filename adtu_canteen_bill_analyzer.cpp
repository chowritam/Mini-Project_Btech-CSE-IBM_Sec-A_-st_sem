#include <iostream>
using namespace std;

int main() 
{
    int n, m;
    cout << "Enter number of students and number of days: ";
    cin >> n >> m;

    int bills[100][100];  
    int totalSpent[100] = {0};
    int dayCollection[100] = {0};

    cout << "Enter the daily bill amounts for each student:\n";
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> bills[i][j];
            totalSpent[i] += bills[i][j];
            dayCollection[j] += bills[i][j];
        }
    }

    cout << "\n--- Total amount spent by each student ---\n";
    for (int i = 0; i < n; i++) 
    {
        cout << "Student " << i + 1 << ": " << totalSpent[i] << endl;
    }

    
    int maxDay = 0;
    for (int j = 1; j < m; j++) 
    {
        if (dayCollection[j] > dayCollection[maxDay]) 
        {
            maxDay = j;
        }
    }

    cout << "\nDay with the highest total collection: Day " 
         << maxDay + 1 << " (Total = " << dayCollection[maxDay] << ")\n";

    
    int maxSpent = totalSpent[0];
    for (int i = 1; i < n; i++) 
    {
        if (totalSpent[i] > maxSpent)
            maxSpent = totalSpent[i];
    }

    cout << "\nStudent(s) who spent the most overall (" << maxSpent << "): ";
    for (int i = 0; i < n; i++) 
    {
        if (totalSpent[i] == maxSpent)
            cout << "Student " << i + 1 << " ";
    }
    cout << endl;

    return 0;
}
