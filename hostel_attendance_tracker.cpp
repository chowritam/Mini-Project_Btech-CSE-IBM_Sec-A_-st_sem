#include <iostream>
using namespace std;

int main() 
{
    int n, m;
    cout << "Enter number of students and number of days (max 7): ";
    cin >> n >> m;

    int attendance[100][7]; 
    int totalPresent[100] = {0};
    int dayTotal[7] = {0};

    cout << "Enter attendance data (1 for present, 0 for absent):\n";
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> attendance[i][j];
            totalPresent[i] += attendance[i][j];  
            dayTotal[j] += attendance[i][j];     
        }
    }

    cout << "\n--- Total days each student was present ---\n";
    for (int i = 0; i < n; i++) 
    {
        cout << "Student " << i + 1 << ": " << totalPresent[i] << " days" << endl;
    }

    
    int maxAttendance = totalPresent[0];
    int topStudent = 1; 
    for (int i = 1; i < n; i++) 
    {
        if (totalPresent[i] > maxAttendance) 
        {
            maxAttendance = totalPresent[i];
            topStudent = i + 1;
        }
        
    }

    
    int minDay = 0;
    for (int j = 1; j < m; j++) 
    {
        if (dayTotal[j] < dayTotal[minDay]) 
        {
            minDay = j;
        }
    }

    cout << "\nStudent with highest attendance: Student " << topStudent 
         << " (" << maxAttendance << " days)" << endl;

    cout << "Day with lowest overall attendance: Day " << minDay + 1 
         << " (Total = " << dayTotal[minDay] << ")" << endl;

    return 0;
}
