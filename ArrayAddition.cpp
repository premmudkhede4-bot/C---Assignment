#include <iostream>
using namespace std;

int main()
{
    int a[5], b[5], c[5];
    int i;

    cout << "Enter 5 elements for first array:" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Enter 5 elements for second array:" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> b[i];
    }

    // Add corresponding array elements
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }

    cout << "\nResult of array addition:" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << c[i] << " ";
    }

    cout << endl;

    return 0;
}