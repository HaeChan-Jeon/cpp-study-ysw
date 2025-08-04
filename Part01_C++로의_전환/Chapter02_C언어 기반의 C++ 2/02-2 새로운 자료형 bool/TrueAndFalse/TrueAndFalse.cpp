#include <iostream>

using namespace std;

int main()
{
    int num = 10;
    int i = 0;

    cout << "True: " << true << endl;
    cout << "False: " << false << endl;

    while (true)
    {
        cout << i++ << ' ';

        if (i > num)
        {
            break;
        }
    }

    cout << endl;

    cout << "sizeOf 1: " << sizeof(1) << endl;
    cout << "sizeOf 0: " << sizeof(0) << endl;
    cout << "sizeOf true: " << sizeof(true) << endl;
    cout << "sizeOf false: " << sizeof(false) << endl;

    return 0;
}
