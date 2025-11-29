#include <iostream>
using namespace std;

int main() {
    int n, mark, total = 0;
    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter marks:\n";
    for (int i = 1; i <= n; i++) {
        cin >> mark;
        total += mark;
    }

    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << (float)total / n << endl;

    return 0;
}
