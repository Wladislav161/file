
#include <iostream>
#include<string>

using namespace std;

class Class
{
public:
    int a;
    void PrintPub()
    {
        cout << a << endl;
    }

    void PrintPubPriv(int b)
    {
        PrintPriv(b);
    }

private:
    int b;
    void PrintPriv(int b)
    {
        cout << b << endl;
    }

};

int main()
{
    setlocale(LC_ALL, "RUS");
    Class Inic;
    Inic.a=15;
    Inic.PrintPub();

    Inic.PrintPubPriv(20);
}