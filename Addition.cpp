#include <iostream>
using namespace std;

void Addition()  // Function without return value
{
    cout << "\n--- Addition Function ---" << endl;

    int num1, num2, sum;

    cout << "Enter num1 and num2: ";
    cin >> num1 >> num2;

    sum = num1 + num2;

    cout << "Addition: " << sum << endl;
}

int main()
{
    Addition();

    return 0;
}