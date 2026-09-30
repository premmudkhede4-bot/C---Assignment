#include <iostream>
using namespace std;

void Division()  // Function without return value
{
    cout << "\n--- Division Function ---" << endl;

    float num1, num2, div;

    cout << "Enter num1 and num2: ";
    cin >> num1 >> num2;

    if (num2 != 0)
    {
        div = num1 / num2;
        cout << "Division: " << div << endl;
    }
    else
    {
        cout << "Division by zero is not possible." << endl;
    }
}

int main()
{
    Division();

    return 0;
}