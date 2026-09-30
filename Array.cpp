#include <iostream>
using namespace std;

int main()
{
    int a[5], b[5];

    cout << "Enter 5 elements for first array:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    // Copy elements from first array to second array
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }

    cout << "\nElements of first array:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nElements of second array:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    cout << endl;

    return 0;
}