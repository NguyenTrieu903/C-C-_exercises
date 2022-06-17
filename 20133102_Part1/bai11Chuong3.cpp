#include <iostream>
#include <string.h>
#define SIZE 100
using namespace std;
void tinhTich(char a[], char b[], char c[]);
int main()
{
	char a[SIZE], b[SIZE], c[SIZE * 2];
	cin.getline(a, SIZE);
	cin.getline(b, SIZE);
	tinhTich(a, b, c);
	cout << c;
}
void tinhTich(char a[], char b[], char c[])
{
	strrev(a);
	strrev(b);
	int lenA = strlen(a);
	int lenB = strlen(b);
	for (int iC = 0; iC < lenA + lenB; iC++)
	{
		c[iC] = '0';
	}
	for (int iB = 0; iB < lenB; iB++)
	{
		int nho = 0;
		int iA;
		for (iA = 0; iA < lenA; iA++)
		{
			int x = (b[iB] - '0') * (a[iA] - '0') + nho + (c[iA + iB] - '0');
			c[iA + iB] = x % 10 + '0';
			nho = x / 10;
		}
		if (nho > 0)
		{
			c[iA + iB] = nho + '0';
		}
	}
	if (c[lenA + lenB - 1] != '0')
	{
		c[lenA + lenB] = '\0';
	}
	else
	{
		c[lenA + lenB - 1] = '\0';
	}
	strrev(c);
}