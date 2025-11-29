#include <iostream>

using namespace std;

const int NUM_STUDENTS = 5;
const int NUM_SUBJECTS = 3;

const char* SUBJECT_NAMES[] = 
{
    "Subject A (Science)",
    "Subject B (History)",
    "Subject C (English)"
};

void print_separator() 
{
    for (int k = 0; k < 50; ++k) 
    {
        cout << "=";
    }
    cout << endl;
}

int main() 
{
    int all_marks[NUM_STUDENTS][NUM_SUBJECTS];

    cout << "--- Mark Entry System ---" << endl;
    cout << "Please enter marks (out of 100) for " << NUM_STUDENTS 
              << " students in " << NUM_SUBJECTS << " subjects." << endl;

    for (int i = 0; i < NUM_STUDENTS; ++i) 
    {
        cout << "\n--- Student " << i + 1 << " of " << NUM_STUDENTS << " ---" << endl;
        
        for (int j = 0; j < NUM_SUBJECTS; ++j) 
        {
            int mark = -1;
            while (true) 
            {
                cout << "Enter mark for " << SUBJECT_NAMES[j] << ": ";
                
                if (cin >> mark) 
                {
                    if (mark >= 0 && mark <= 100) 
                    {
                        all_marks[i][j] = mark;
                        break;
                    }
                    else 
                    {
                        cout << "Error: Mark must be between 0 and 100. Try again." << endl;
                    }
                } 
                else 
                {
                    cout << "Error: Invalid input. Please enter a whole number." << endl;
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
            }
        }
    }

    cout << "\n";
    print_separator();
    cout << "CALCULATION RESULTS: Highest Marks in Each Subject" << endl;
    print_separator();

    for (int j = 0; j < NUM_SUBJECTS; ++j) 
    {
        int max_mark = -1;
        
        for (int i = 0; i < NUM_STUDENTS; ++i) 
        {
            if (all_marks[i][j] > max_mark) 
            {
                max_mark = all_marks[i][j];
            }
        }
        
        cout << "-> Highest mark in " << SUBJECT_NAMES[j] << ": " << max_mark << endl;
    }

    print_separator();
    
    return 0;
}