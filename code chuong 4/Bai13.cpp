#include <iostream>
#define SIZE 20
using namespace std;
void xuat();
int a[SIZE], b[SIZE] = {0}, n;
void lietkeHoanVi(int k);
int main()
{
	cin >> n;
	lietkeHoanVi(0);
	return 0;
}
void lietkeHoanVi(int k)
{
	if (k == n)
	{
		xuat();
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (b[i] == 0)
			{
				a[k] = i;
				b[i] = 1;
				lietkeHoanVi(k + 1);
				b[i] = 0;
			}
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