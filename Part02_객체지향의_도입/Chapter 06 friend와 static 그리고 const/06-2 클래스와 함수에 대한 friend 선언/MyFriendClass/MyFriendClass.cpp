#include <iostream>

using namespace std;

class Girl;

class Boy
{
private:
    int height;
    friend class Girl;

public:
    Boy(int len) : height(len)
    { }
    void ShowYourFriendInfo(Girl& frn);
};

class Girl
{
private:
    string phNum;
public:
    Girl(string num) : phNum(num)
    { }
    void ShowYourFriendInfo(Boy& frn);
    friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn)
{
    cout << "Her Phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)
{
    cout << "His Phone number: " << frn.height << endl;
}
int main()
{
    Boy boy(170);
    Girl girl("010-1234-5678");
    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);
}