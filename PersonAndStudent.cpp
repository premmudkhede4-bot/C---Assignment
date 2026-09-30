#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void getPerson()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person
{
public:
    int rollNo;

    void getStudent()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nRoll Number: " << rollNo;
    }
};

int main()
{
    Student s;
    s.getPerson();
    s.getStudent();
    s.display();

    return 0;
}