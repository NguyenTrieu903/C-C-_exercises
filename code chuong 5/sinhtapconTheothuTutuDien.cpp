#include <iostream>
#define SIZE 20
using namespace std;
void sinhTapcon(int n, int &dem);
void xuat(int a[], int n);
int main()
{
	int n;
	cin >> n;
	int dem = 0;
	sinhTapcon(n, dem);
	cout << dem;
	return 0;
}
void sinhTapcon(int n, int &dem)
{
	int a[SIZE];
	int k = 0;
	xuat(a, k);
	dem++;
	a[0] = 0;
	int i = 0;
	k = 1;
	do
	{
		xuat(a, k);
		dem++;
		if (a[i] < n - 1)
		{
			a[i + 1] = a[i] + 1;
			i++;
			k++;
		}
		else
		{
			if (i == 0)
				break;
			i--;
			k--;
			a[i]++;
		}
	} while (true);
}
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}