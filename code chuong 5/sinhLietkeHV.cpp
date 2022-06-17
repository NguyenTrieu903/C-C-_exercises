#include <iostream>
using namespace std;
int x[100];
void Swap(int &a, int &b);
void sinhHV(int n);
int main()
{
	int n;
	cin >> n;
	sinhHV(n);
}
void sinhHV(int n)
{
	int i, k, a, b;
	for (i = 1; i <= n; i++)
		x[i] = i;
	while (true)
	{
		for (i = 1; i <= n; i++)
			cout << x[i] << " ";
		cout << endl;
		i = n - 1;
		while (i > 0 && (x[i] > x[i + 1]))
			i--;
		if (i > 0)
		{
			k = n;
			while (x[k] < x[i])
				k--;
			Swap(x[k], x[i]);
			a = i + 1;
			b = n;
			while (a < b)
			{
				Swap(x[a], x[b]);
				a++;
				b--;
			}
		}
		else if (i == 0)
			break;
	}
}
void Swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}