#include <iostream>
#include <string>

using namespace std;

namespace COMP_POS
{
    enum
    {
        CLEARK,
        SENNIOR,
        ASSIST,
        MANAGER
    };
}

class NameCard
{
private:
    string name;
    string companyName;
    string phoneNumber;
    int position;

    const string PositionToName(int position)
    {
        string name = "";

        switch (position)
        {
        case COMP_POS::CLEARK:
            name = "사원";
            break;
        case COMP_POS::SENNIOR:
            name = "주임";
            break;
        case COMP_POS::ASSIST:
            name = "대리";
            break;
        case COMP_POS::MANAGER:
            name = "과장";
            break;
        }

        return name;
    }

public:
    NameCard(string name, string companyName, string phoneNumber, int positon)
        : name(name), companyName(companyName), phoneNumber(phoneNumber), position(positon)
    {
    }

    const void ShowNameCardInfo()
    {
        cout << "이름: " << name << endl;
        cout << "회사: " << companyName << endl;
        cout << "전화번호: " << phoneNumber << endl;
        cout << "직급: "  << PositionToName(position) << endl << endl;
    }
};

int main()
{
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLEARK);
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::MANAGER);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
    manClerk.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
    return 0;
}