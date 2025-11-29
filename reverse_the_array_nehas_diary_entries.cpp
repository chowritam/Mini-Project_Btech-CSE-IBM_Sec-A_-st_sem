#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    int arr[n];

    cout << "Enter exercise times: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Exercise times in reverse order: ";
    for (int i = n - 1; i >= 0; i--) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}
