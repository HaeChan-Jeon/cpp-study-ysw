#include <iostream>

using namespace std;

class Computer
{
private:
    string owner;
public:
    Computer(string name) : owner(name)
    { }
    void Calculate()
    {
        cout << "요청 내용을 계산합니다." << endl;
    }
};

class NotebookComp : public Computer
{
private:
    int Battery;
public:
    NotebookComp(string name, int initChag)
        : Computer(name), Battery(initChag)
    { }
    void Charging()
    {
        Battery += 5;
    }
    void UseBattery()
    {
        Battery -= 1;
    }
    void MovingCal()
    {
        if (GetBatteryInfo() < 1)
        {
            cout << "충전이 필요합니다." << endl;
        }
        cout << "이동하면서: ";
        Calculate();
        UseBattery();
    }
    int GetBatteryInfo()
    {
        return Battery;
    }
};

class TabletNotebook : public NotebookComp
{
private:
    string regstPenModel;
public:
    TabletNotebook(string name, int initChag, string pen)
        : NotebookComp(name, initChag), regstPenModel(pen)
    { }
    void Write(string penInfo)
    {
        if (GetBatteryInfo() < 1)
        {
            cout << "충전이 필요합니다." << endl;
            return;
        }
        if (penInfo.compare(regstPenModel) != 0)
        {
            cout << "등록된 펜이 아닙니다.";
            return;
        }
        cout << "필기 내용을 처리합니다." << endl;
        UseBattery();
    }
};

int main()
{
    NotebookComp nc("이수종", 5);
    TabletNotebook tn("정수영", 5, "ISE-241-242");
    nc.MovingCal();
    tn.Write("ISE-241-242");
    return 0;
}