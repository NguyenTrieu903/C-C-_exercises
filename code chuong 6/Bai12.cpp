#include <iostream>
#include <string.h>
#define MAX 256
using namespace std;
void nhap(char X[MAX]);
void xuat(char X[]);
void inBang(char X[MAX], char Y[MAX], int L[][MAX], int b[][MAX]);
void taoBang(char X[], char Y[], int L[][MAX], int b[][MAX]);
void traBang(char X[], int b[][MAX], char PA[], int k, char Y[]);
int main()
{
	char X[MAX], Y[MAX], PA[MAX];
	int L[MAX][MAX], b[MAX][MAX];
	nhap(X);
	nhap(Y);
	taoBang(X, Y, L, b);
	traBang(X, b, PA, L[strlen(X)][strlen(Y)], Y);
	puts(PA);
	return 0;
}
void taoBang(char X[], char Y[], int L[][MAX], int b[][MAX])
{
	int m = strlen(X);
	int n = strlen(Y);
	int i, j;
	for (i = 0; i <= m; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0)
				L[i][j] = 0;
			else if (X[i - 1] == Y[j - 1])
			{
				L[i][j] = L[i - 1][j - 1] + 1;
				b[i][j] = 1;
			}
			else if (L[i - 1][j] >= L[i][j - 1])
			{
				L[i][j] = L[i - 1][j];
				b[i][j] = 2;
			}
			else
			{
				L[i][j] = L[i][j - 1];
				b[i][j] = 3;
			}
		}
	}
}
void traBang(char X[], int b[][MAX], char PA[], int k, char Y[])
{
	int m = strlen(X);
	int n = strlen(Y);
	int i = m;
	int j = n;
	PA[k] = '\0';
	k--;
	while (i > 0 && j > 0)
	{
		if (b[i][j] == 1)
		{
			PA[k] = X[i - 1];
			i--;
			j--;
			k--;
		}
		else if (b[i][j] == 2)
			i--;
		else
			j--;
	}
}
void inBang(char X[MAX], char Y[MAX], int L[][MAX], int b[][MAX])
{
	int m = strlen(X);
	int n = strlen(Y);
	int i, j;
	cout << "  ";
	for (j = 0; j <= n; j++)
		cout << j << " ";
	cout << endl;
	cout << "  ";
	for (j = 0; j < n; j++)
		cout << Y[j] << " ";
	cout << endl;
	for (i = 0; i < m; i++)
	{
		cout << i << " ";
		if (i < m)
		{
			cout << X[i] << " ";
		}
		else
			cout << " ";
		for (j = 0; j <= n; j++)
		{
			cout << L[i][j] << " " << b[i][j] << " ";
		}
		cout << endl;
	}
}
void nhap(char X[MAX])
{
	gets(X);
}
void xuat(char X[])
{
	cout << X;
}