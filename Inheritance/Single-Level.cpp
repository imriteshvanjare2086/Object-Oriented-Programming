#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;
    string department;

public:
    Person(string name, int age, string department)
    {
        this->name = name;
        this->age = age;
        this->department = department;
    }
};

class Student : public Person   
{
    int roll_no;

public:
    Student(string name, int age, string department, int roll_no)
        : Person(name, age, department)
    {
        this->roll_no = roll_no;
    }

    void display()
    {
        cout << name << endl;
        cout << age << endl;
        cout << department << endl;
        cout << roll_no << endl;
    }
};

int main()
{
    Student s1("Ritesh", 19, "IT", 149);
    s1.display();
}



