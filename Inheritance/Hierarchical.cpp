#include <iostream>
#include <string>
using namespace std;

class Parent
{
protected:
    string name;
    int age;
    string gender;
    float salary;

public:
    Parent(string name, int age, string gender, float salary)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->salary = salary;
    }

    virtual void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Salary: " << salary << endl;
        cout << endl;
    }
};

class Child1 : public Parent
{
protected:
    string hobby;

public:
    Child1(string name, int age, string gender, float salary, string hobby)
        : Parent(name, age, gender, salary)
    {
        this->hobby = hobby;
    }

    void display() override
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Hobby: " << hobby << endl;
        cout << endl;
    }
};

class Child2 : public Parent
{
protected:
    string hobby;

public:
    Child2(string name, int age, string gender, float salary, string hobby)
        : Parent(name, age, gender, salary)
    {
        this->hobby = hobby;
    }

    void display() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Hobby: " << hobby << endl;
        cout << endl;
    }
};

int main()
{
    Parent p1("Sanjay", 52, "Male", 500000.0);
    p1.display();

    Child1 c1("Ritesh", 19, "Male", 10000.0, "Cricket");
    c1.display();

    Child2 c2("Shaizaan", 19, "Male", 20000.0, "Gaming");
    c2.display();

    return 0;
}
