#include <iostream>
using namespace std;

int main() 
{
    int num;

    cout<<"Enter a number : ";
    cin >> num;

 
    if (num % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    if (num % 5 == 0)
        cout << "Divisible by 5" << endl;
    else
        cout << "Not divisible by 5" << endl;

    return 0;
}
