#include <iostream>
#define SIZE 20
using namespace std;
int x[100];
int t[100];
int n;
void Try(int i);
void xuat(int k);
int main()
{
	cin >> n;
	x[0] = 1;
	t[0] = 0;
	Try(1);
}
void Try(int i)
{
	int j;
	for (j = x[i - 1]; j <= (n - t[i - 1]) / 2; j++)
	{
		x[i] = j;
		t[i] = t[i - 1] + j;
		Try(i + 1);
	}
	x[i] = n - t[i - 1];
	xuat(i);
}
void xuat(int k)
{
	for (int i = 1; i <= k - 1; i++)
	{
		cout << x[i] << " ";
	}
	cout << x[k] << endl;
}
