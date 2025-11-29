#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    int records[n];
    cout << "Enter daily profit/loss values: ";
    for (int i = 0; i < n; i++) {
        cin >> records[i];
    }

    int totalProfit = 0, totalLoss = 0, netBalance = 0;

    for (int i = 0; i < n; i++) {
        if (records[i] > 0)
            totalProfit += records[i];
        else if (records[i] < 0)
            totalLoss += -records[i]; 
        netBalance += records[i];
    }

    cout << "\nTotal Profit: " << totalProfit;
    cout << "\nTotal Loss: " << totalLoss;
    cout << "\nNet Balance: " << netBalance << endl;

    return 0;
}
