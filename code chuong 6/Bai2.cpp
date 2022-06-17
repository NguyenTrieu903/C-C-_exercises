#include <iostream>
#include <conio.h>
using namespace std;
void nhap(int &k, int &n);
int tinhToHop(int k, int n);
int main()
{
	int k, n;
	nhap(k, n);
	cout << tinhToHop(k, n);
}
void nhap(int &k, int &n)
{
	cin >> k >> n;
}
int tinhToHop(int k, int n)
{
	int a[100][100];
	if (k == 0 || k == n)
		return 1;
	else
		for (int i = 0; i <= k; i++)
			for (int j = i; j <= n; j++)
				if (i == 0 || i == j)
					a[i][j] = 1;
				else
					a[i][j] = a[i][j - 1] + a[i - 1][j - 1];
	return a[k][n];
}
