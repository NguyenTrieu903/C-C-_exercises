#include <iostream>
#include <string.h>
#define SIZE 100
using namespace std;
void tinhTong(char s1[], char s2[], char s[]);
void tinhHieu(char s1[], char s2[], char s[]);
void hieuSolonChosoNho(char s1[], char s2[], char s[]);
void chen(char s[], int k);
void chuanHoa(char s1[], char s2[]);
int main()
{
	char s1[SIZE], s2[SIZE], s[SIZE];
	gets(s1);
	gets(s2);
	chuanHoa(s1, s2);
	cout << "Hieu = ";
	tinhHieu(s1, s2, s);
	puts(s);
}

void chuanHoa(char s1[], char s2[])
{
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	if (l1 > l2)
	{
		chen(s2, l1 - l2);
	}
	else
		chen(s1, l2 - l1);
}
void chen(char s[], int k)
{
	strrev(s);
	int l = strlen(s);
	for (int i = 0; i < k; i++)
	{
		s[l + i] = '0';
	}
	s[l + k] = '\0';
	strrev(s);
}
void tinhTong(char s1[], char s2[], char s[])
{
	strrev(s1);
	strrev(s2);
	int l = strlen(s1);
	int nho = 0;
	for (int i = 0; i < l; i++)
	{
		int t = (s1[i] - '0' + s2[i] - '0') + nho;

		s[i] = t % 10 + '0';
		nho = t / 10;
	}
	if (nho == 1)
	{
		s[l++] = '1';
	}
	s[l] = '\0';
	strrev(s);
}
void hieuSolonChosoNho(char s1[], char s2[], char s[])
{
	strrev(s1);
	strrev(s2);
	int l = strlen(s1);
	int nho = 0;
	for (int i = 0; i < l; i++)
	{
		int t = (s1[i] - '0') - (s2[i] - '0') - nho;
		if (t < 0)
		{
			s[i] = t + 10 + '0';
			nho = 1;
		}
		else
		{
			s[i] = t + '0';
			nho = 0;
		}
	}
	s[l] = '\0';
	strrev(s);
}
void tinhHieu(char s1[], char s2[], char s[])
{
	if (strcmp(s1, s2) > 0)
	{
		hieuSolonChosoNho(s1, s2, s);
	}
	else
	{
		hieuSolonChosoNho(s2, s1, s);
		strrev(s);
		int l = strlen(s);
		s[l] = '-';
		s[l + 1] = '\0';
		strrev(s);
	}
}