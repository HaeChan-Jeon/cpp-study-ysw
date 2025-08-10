#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string myname, int myage) : name(myname), age(myage)
    {
    }
    Person()
    {
        name = "";
        age = 0;
        cout << "called Person()" << endl;
    }
    void SerPersonInfo(string myname, int myage)
    {
        name = myname;
        age = myage;
    }
    void ShowPersonInfo() const
    {
        cout << "이름: " << name << ", ";
        cout << "나이: " << age << endl;
    }
    ~Person()
    {
        cout << "called destructor!" << endl;
    }
};

int main()
{
    Person parr[3];
    string name;
    int age;

    for (int i = 0; i < 3; ++i)
    {
        cout << "이름: ";
        cin >> name;
        cout << "나이: ";
        cin >> age;
        parr[i].SerPersonInfo(name, age);
    }

    parr[0].ShowPersonInfo();
    parr[1].ShowPersonInfo();
    parr[2].ShowPersonInfo();

    return 0;
}