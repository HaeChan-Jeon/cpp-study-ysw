#include <iostream>

using namespace std;

class FruitSeller
{
private:

    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    void InitMembers(int price, int num, int money)
    {
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }

    int SaleApples(int money)
    {
        int num = money / APPLE_PRICE;
        numOfApples -= num;
        myMoney += money;
        return num;
    }

    void ShowSalesResult() const
    {
        cout << "남은 사과: " << numOfApples << endl;
        cout << "판매 수익: " << myMoney << endl << endl;
    }
};

class FruitBuyer
{
    int myMoney;
    int numOfApples;

public:
    void InitMember(int money)
    {
        myMoney = money;
        numOfApples = 0;
    }

    bool BuyApples(FruitSeller& seller, int money)
    {
        if (money < 0)
        {
            cout << "0보다 작은 수는 지불할 수 없습니다." << endl;
            return false;
        }

        numOfApples += seller.SaleApples(money);
        myMoney -= money;
        
        return true;
    }

    void ShowBuyResult() const
    {
        cout << "현재 잔액: " << myMoney << endl;
        cout << "사과 개수: " << numOfApples << endl << endl;
    }
};

int main()
{
    FruitSeller seller;
    seller.InitMembers(1000, 20, 0);
    FruitBuyer buyer;
    buyer.InitMember(5000);
    if (!buyer.BuyApples(seller, -5))
    {
        cout << "잘못된 값을 전달했습니다." << endl;
    };

    if (!buyer.BuyApples(seller, 2000))
    {
        cout << "잘못된 값을 전달했습니다." << endl;
    };

    cout << "과일 판매자의 현황" << endl;
    seller.ShowSalesResult();
    buyer.ShowBuyResult();
    return 0;
}