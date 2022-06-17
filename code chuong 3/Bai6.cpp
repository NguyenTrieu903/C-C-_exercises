#include <iostream>
using namespace std;
float Taylor_exponential(int n, float x);
int main()
{
    int n, x;
    cin >> x;
    n = 10;
    cout << Taylor_exponential(n, x);
}
float Taylor_exponential(int n, float x)
{
    float exp_sum = 1.0;
    for (int i = n - 1; i > 0; --i)
        exp_sum = 1 + x * exp_sum / i;
    return exp_sum;
}
