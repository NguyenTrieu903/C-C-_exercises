#include <iostream>
using namespace std;
int phanTunFibo(int n);
int main()
{
	int n;
	cin >> n;
	int kq = phanTunFibo(n);
	cout << kq;
}
int phanTunFibo(int n)
{
	if (n == 1 || n == 0)
	{
		return n;
	}
	return phanTunFibo(n - 1) + phanTunFibo(n - 2);
}