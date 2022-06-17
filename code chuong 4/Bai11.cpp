#include <iostream>
#define SIZE 20
using namespace std;
int a[SIZE], n;
void lietkeNP(int k);
void xuat();
int main()
{
	cin >> n;
	lietkeNP(0);
}
void lietkeNP(int k)
{
	if (k == n)
		xuat();
	else
	{
		for (int i = 0; i <= 1; i++)
		{
			a[k] = i;
			lietkeNP(k + 1);
		}
	}
}
void xuat()
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}