#include <iostream>
using namespace std;

class Student
{
    static int count;
    int rollNo;

public:
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        count++;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
    }

    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1, s2;

    s1.getData();
    s2.getData();

    s1.display();
    s2.display();

    Student::showCount();

    return 0;
}