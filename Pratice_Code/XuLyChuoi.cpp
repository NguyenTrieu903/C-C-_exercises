#include<iostream>
#include<string.h>
using namespace std;
void Nenchuoi(char s[]);
void ThemKyTu(char s[], int vitri, char kytu);
void giaiMaChuoi(char s[]);
int layChuso(int x);
int main() {
	char s[100];
	gets(s);
//	Nenchuoi(s);
	giaiMaChuoi(s);
}
void ThemKyTu(char s[], int vitri, char kytu) {
	int n = strlen(s);
	for (int i=n-1; i>=vitri; i--) {
		s[i+1]=s[i];
	}
	s[vitri]=kytu;
	s[n+1]='\0';
}
bool isDigit(char s) {
	return '0' <= s && s <= '9';
}
int layChuso(int x) {
	int dem=0;
	while(x!=0) {
		x=x/10;
		dem++;
	}
	return dem;
}
void giaiMaChuoi(char s[]) {
	char s1[100]=" ";
	int n =strlen(s);
	int d=0;
	for (int i=0; i<n; i++) {
		if(isDigit(s[i])&&i==0) {
			int sochuso=0;
			int x = 0;
			while (i < n && isDigit(s[i])) {
				x = 10 * x + (s[i++] - '0');
			}
			while (x--) {
				cout << s[i];
			}
		} else if (isDigit(s[i]) || !isDigit(s[i-1])) {
			int x = 0;
			int sochuso=0;
			while (i < n && isDigit(s[i])) {
				x = 10 * x + (s[i++] - '0');
			}
			sochuso=layChuso(x);
			while (x--) {
				cout << s[i-sochuso-1];
			}
		}

	}
}
void Nenchuoi(char s[]) {
	int count=0;
	int i=0;
	char s1[100]=" ";
	int n = strlen(s);
	int d=0;
	int x=0;
	for (int i=0; i<n; i++) {
		count=1;
		while(s[i]==s[i+1] && i<n-1) {
			count++;
			i++;
		}
		ThemKyTu(s1,d,count+'0');
		ThemKyTu(s1,d+1,s[i]);
		d+=2;
	}
	cout<<s1;
}