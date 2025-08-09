#include <iostream>

using namespace std;

class SinivelCap
{
public:
    void Take() const
    {
        cout << "콧물이 싹~ 납니다." << endl;
    }
};

class SneezeCap
{
public:
    void Take() const
    {
        cout << "재채기가 멎습니다." << endl;
    }
};

class SnuffleCap
{
public:
    void Take() const
    {
        cout << "코가 뻥 뚫립니다." << endl;
    }
};

class CONTAC600
{
private:
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;

public:
    void Take() const
    {
        scap.Take();
        zcap.Take();
        ncap.Take();
    }
};

class ColdPatient
{
public:
    void TakeCONTAC600(const CONTAC600& cap) const
    {
        cap.Take();
    }
};

int main()
{
    CONTAC600 cap;
    ColdPatient sufferer;
    sufferer.TakeCONTAC600(cap);
    return 0;
}