#include <iostream>
using namespace std;

void Multiplication()  // Function without return value
{
    cout << "\n--- Multiplication Function ---" << endl;

    int num1, num2, mul;

    cout << "Enter num1 and num2: ";
    cin >> num1 >> num2;

    mul = num1 * num2;

    cout << "Multiplication: " << mul << endl;
}

int main()
{
    Multiplication();

    return 0;
}