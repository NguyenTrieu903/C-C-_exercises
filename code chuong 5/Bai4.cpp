#include <iostream>
using namespace std;
void batBit(int &n, int k);
void tatBit(int &n, int k);
int layBit(int n, int k);
int main()
{
    int n, k;
    cin >> n >> k;
    batBit(n, k);
    tatBit(n, k);
    cout << layBit(n, k);
}
void batBit(int &n, int k)
{
    n = n | (0x1 << k);
    cout << n;
}
void tatBit(int &n, int k)
{
    n = n & (~(0x1 << k));
    cout << n;
}
int layBit(int n, int k)
{
    return (n >> k) & 0x1;
}