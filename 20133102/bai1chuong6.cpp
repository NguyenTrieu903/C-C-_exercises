#include <iostream>
#include <math.h>
using namespace std;
int thapPhanSangnhiPhan(int n);
void doiSang2(int n);
int main()
{
    int n;
    cin >> n;
    doiSang2(n);
}
void doiSang2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << thapPhanSangnhiPhan(i) << endl;
    }
}
int thapPhanSangnhiPhan(int n)
{
    int result = 0;
    int i = 0;
    while (n > 0)
    {
        result += (n % 2) * pow(10, i);
        i++;
        n = n / 2;
    }
    return result;
}