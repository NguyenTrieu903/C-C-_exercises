#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void sapXepgiamDan(int a[], int n);
void insertArray(int a[], int &n, int x, int vt);
void chenMang(int a[], int &n, int x);
int Vitri(int a[], int n, int x);
int main()
{
	int a[100], n, x;
	nhapMang(a, n);
	sapXepgiamDan(a, n);
	xuatMang(a, n);
	cout << endl;
	cout << "Nhap so nguyen ";
	cin >> x;
	chenMang(a, n, x);
	xuatMang(a, n);
}
void insertArray(int a[], int &n, int x, int vt)
{
	for (int i = n; i > vt; i--)
	{
		a[i] = a[i - 1];
	}
	a[vt] = x;
	n++;
}
void chenMang(int a[], int &n, int x)
{
	int vtr = Vitri(a, n, x);
	insertArray(a, n, x, vtr);
}
int Vitri(int a[], int n, int x)
{
	if (x > a[0])
	{
		return 0;
	}
	else if (x < a[n - 1])
		return n;
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (x >= a[i])
				return i;
		}
	}
}
void sapXepgiamDan(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
void nhapMang(int a[], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}