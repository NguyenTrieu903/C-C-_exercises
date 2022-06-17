#include <iostream>
using namespace std;
int a[1000001];
void sangEratosthene(int a[]);
void LietkePrime(int n);
int main()
{
    int n;
    cin >> n;
    LietkePrime(n);
}
void LietkePrime(int n)
{
    sangEratosthene(a);
    for (int i = 0; i <= n; i++)
    {
        if (a[i])
            cout << i << " ";
    }
}
void sangEratosthene(int a[])
{
    for (int i = 0; i <= 1000000; i++)
    {
        a[i] = 1;
    }
    a[0] = a[1] = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if (a[i])
        {
            for (int j = i * i; j < 1000000; j += i)
            {
                a[j] = 0;
            }
        }
    }
}