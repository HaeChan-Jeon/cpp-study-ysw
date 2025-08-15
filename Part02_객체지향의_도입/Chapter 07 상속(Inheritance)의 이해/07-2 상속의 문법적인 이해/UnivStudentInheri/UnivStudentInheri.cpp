#include <iostream>

using namespace std;

class Person
{
private:
    int age;
    string name;
public:
    Person(int myage, string myname)
        : age(myage), name(myname)
    { }
    void WhatYourName() const
    {
        cout << "My name is " << name << endl;
    }
    void HowOldAreYou() const
    {
        cout << "I'm " << age << " years old" << endl;
    }
};

class UnivStudent : public Person
{
private:
    string major;
public:
    UnivStudent(string myname, int myage, string mymajor)
        : Person(myage, myname), major(mymajor)
    { }
    void WhoAreYou() const
    {
        WhatYourName();
        HowOldAreYou();
        cout << "My major is " << major << endl << endl;
    }
};

int main()
{
    UnivStudent ustd1("Lee", 22, "Computer eng.");
    ustd1.WhoAreYou();

    UnivStudent ustd2("Yoon", 21, "Electronic eng.");
    ustd2.WhoAreYou();

    return 0;
}