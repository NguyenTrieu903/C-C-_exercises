#include <iostream>
using namespace std;
void thapHaNoi(int n, char a, char b, char c);
void Chuyen(int n, char a, char b);
int main()
{
    int n;
    cin >> n;
    char a = 'A', b = 'B', c = 'C';
    thapHaNoi(n, a, b, c);
}
void Chuyen(int n, char a, char b)
{
    cout << "\nChuyen dia thu " << n << "tu coc " << a << " sang coc " << b;
}
void thapHaNoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        Chuyen(1, a, c);
    }
    else
    {
        thapHaNoi(n - 1, a, c, b);
        Chuyen(n, a, c);
        thapHaNoi(n - 1, b, a, c);
    }
}