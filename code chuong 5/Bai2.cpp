#include <iostream>
using namespace std;
int kySo(int n);
int bacK(int n, int k);
bool isAmstrong(int n);
void lietke(int n);
int tongPhantuAs(int a[], int n);
void nhapMang(int a[100], int &n);
int main()
{
	int a[100], n;
	nhapMang(a, n);
	cout << tongPhantuAs(a, n);
}
int tongPhantuAs(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (isAmstrong(a[i]))
			tong += a[i];
	}
	return tong;
}
int bacK(int n, int k)
{
	int result = 1;
	while (k > 0)
	{
		result *= n;
		k--;
	}
	return result;
}
bool isAmstrong(int n)
{
	int s = n;
	int kyso = kySo(n);
	int tmp = 0;
	int tong = 0;
	while (n > 0)
	{
		tmp = n % 10;
		tong += bacK(tmp, kyso);
		n = n / 10;
	}
	if (tong == s)
		return true;
	return false;
}
int kySo(int n)
{
	int kyso = 0;
	while (n > 0)
	{
		n = n / 10;
		kyso++;
	}
	return kyso;
}
void nhapMang(int a[100], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}