#include <iostream>

using namespace std;

class MyFriendInfo
{
private:
    string name;
    int age;
public:
    MyFriendInfo(string fname, int fage)
        : name(fname), age(fage)
    { }
    void ShowMyFriendInfo()
    {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
    string addr;
    string phone;
public:
    MyFriendDetailInfo(string fname, int fage, string faddr, string fphone)
        : MyFriendInfo(fname, fage), addr(faddr), phone(fphone)
    { }
    void ShowMyFriendDetailInfo()
    {
        ShowMyFriendInfo();
        cout << "주소: " << addr << endl;
        cout << "전화: " << phone << endl << endl;
    }
};

int main()
{
    MyFriendDetailInfo f1("park", 27, "suri", "000");
    MyFriendDetailInfo f2("jeon", 37, "surir", "010");
    f1.ShowMyFriendDetailInfo();
    f2.ShowMyFriendDetailInfo();
    return 0;
}