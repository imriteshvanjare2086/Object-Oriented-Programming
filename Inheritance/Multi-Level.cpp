#include <iostream>
#include <string>
using namespace std;

class Grandparent
{
protected:
    string name;
    int age;
    float pension;

public:
    Grandparent(string name, int age, float pension)
    {
        this->name = name;
        this->age = age;
        this->pension = pension;
    }

    void displayGrandparent()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Pension: " << pension << endl;
    }
};

class Parent : public Grandparent
{
protected:
    float salary;

public:
    Parent(string name, int age, float pension, float salary)
        : Grandparent(name, age, pension)
    {
        this->salary = salary;
    }

    void displayParent()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Children : public Parent
{
protected:
    string degree;

public:
    Children(string name, int age, float pension, float salary, string degree)
        : Parent(name, age, pension, salary)
    {
        this->degree = degree;
    }

    void displayChild()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Degree: " << degree << endl;
    }
};

int main()
{
    Grandparent g1("Babulal", 75, 12000);
    g1.displayGrandparent();
    cout << endl;

    Parent p1("Sanjay", 52, 12000, 900000);
    p1.displayParent();
    cout << endl;

    Children c1("Ritesh", 19, 12000, 900000, "BTech");
    c1.displayChild();
}


