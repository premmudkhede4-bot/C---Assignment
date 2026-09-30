#include <iostream>
using namespace std;

void Subtraction()  // Function without return value
{
    cout << "\n--- Subtraction Function ---" << endl;

    int num1, num2, sub;

    cout << "Enter num1 and num2: ";
    cin >> num1 >> num2;

    sub = num1 - num2;

    cout << "Subtraction: " << sub << endl;
}

int main()
{
    Subtraction();

    return 0;
}