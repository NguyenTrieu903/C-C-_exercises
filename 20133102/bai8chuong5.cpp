#include <iostream>
#include <string.h>
using namespace std;
bool kiemTradoiXung(char s[]);
int main()
{
    char s[100];
    gets(s);
    cout << kiemTradoiXung(s);
}
bool kiemTradoiXung(char s[])
{
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
        {
            return false;
        }
    }
    return true;
}