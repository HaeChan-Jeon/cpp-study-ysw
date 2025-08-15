#include <iostream>

using namespace std;

class Person
{
private:
    string name;
public:
    Person(string myname)
        : name(myname)
    { }
    void WhatYourName() const
    {
        cout << "My name is " << name << endl;
    }
};

class UnivStudent : public Person
{
private:
    string major;
public:
    UnivStudent(string myname, string mymajor)
        : Person(myname), major(mymajor)
    { }
    void WhoAreYou() const
    {
        WhatYourName();
        cout << "My major is " << major << endl << endl;
    }
};

int main()
{
    UnivStudent st1("Kim", "Mathematics");
    st1.WhoAreYou();

    UnivStudent st2("Hong", "Physics");
    st2.WhoAreYou();

    return 0;
}