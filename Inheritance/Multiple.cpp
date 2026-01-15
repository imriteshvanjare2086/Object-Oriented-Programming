#include <iostream>
#include <string>
using namespace std;

class Parent1
{
  protected:
  string name;
  int age;
  
  public:
  Parent1(string name, int age)
    {
      this->name = name;
      this->age = age;
    }
    
    virtual void display()
    {
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
      cout << endl;
    }
  };
  
  class Parent2
  {
    protected:
    string gender;
    float salary;
    
    public:
    Parent2(string gender, float salary)
    {
      this->gender = gender;
      this->salary = salary;
    }
    
    virtual void display()
    {
      cout << "Gender: " << gender << endl;
      cout << "Salary: " << salary << endl;
      cout << endl;
    }
  };
  
  class Child : public Parent1, public Parent2
  {
    protected:
    string hobby;
    
    public:
    Child(string name, int age, string gender, float salary, string hobby)
    : Parent1(name, age), Parent2(gender, salary)
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
    
    int main()
{
  Parent1 p1("Sanjay", 52);
    p1.display();

    Parent2 p2("Male", 100000.0);
    p2.display();

    Child c1("Ritesh", 19, "Male", 200000.0, "Cricket");
    c1.display();

    return 0;
}
