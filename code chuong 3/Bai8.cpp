#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    float a, tong = 0;
    cin >> a;
    do
    {
        tong += 1.0 / i;
        i++;
    } while (tong <= a);
    i--;
    printf("%d ", i);
}