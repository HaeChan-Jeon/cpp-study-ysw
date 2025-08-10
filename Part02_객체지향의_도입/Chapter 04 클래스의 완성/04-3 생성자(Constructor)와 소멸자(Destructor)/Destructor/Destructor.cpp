#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(const string& myname, int myage)
        : name(myname), age(myage) {}

    void ShowPersonInfo() const
    {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }
    ~Person()
    {
        cout << "called destructor for " << name << endl;
    }
};

int main()
{
    Person man1("Lee dong woo", 29);
    Person man2("Jang dong gun", 41);
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}