#include <iostream>

using namespace std;

class Book
{
private:
    string title;
    string isbn;
    int price;
public:
    Book(string btitle, string bisbn, int bprice)
        : title(btitle), isbn(bisbn), price(bprice)
    { }
    void ShowBookInfo()
    {
        cout << "제목: " << title << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "가격: " << price << endl;
    }
};

class EBook : public Book
{
private:
    string DRMKEY;
public:
    EBook(string btitle, string bisbn, int bprice, string bDRMKEY)
        : Book(btitle, bisbn, bprice), DRMKEY(bDRMKEY)
    { }
    void ShowEBookInfo()
    {
        ShowBookInfo();
        cout << "인증키: " << DRMKEY << endl;
    }
};

int main()
{
    Book book("좋은 C++", "555-12345-890-0", 20000);
    book.ShowBookInfo();
    cout << endl;
    EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "asdf");
    ebook.ShowEBookInfo();
    return 0;
}