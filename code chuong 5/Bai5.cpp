#include <iostream>
using namespace std;
int demSobit1(int n);
int layBit(int n, int k);
int main()
{
    int n;
    cin >> n;
    cout << demSobit1(n);
}
int demSobit1(int n)
{
    int dem = 0;
    for (int i = 0; i < 32; i++)
    {
        if (layBit(n, i) == 1)
        {
            dem++;
        }
    }
    return dem;
}
int layBit(int n, int k)
{
    return (n >> k) & 0x1;
}