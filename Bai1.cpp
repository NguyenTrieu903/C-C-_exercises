#include<iostream>
#include<string>
using namespace std;
int soDaumongoac(char s[]);
int soDaudongngoac(char s[]);
int kiemTrahopLe(char s[]);
int kiemtraKhac (char s[]);
int main() {
	char s[100];
	gets(s);
	cout<<kiemTrahopLe(s);
}
//int Xuly(char s[]) {
//	if (kiemTrahopLe(s)==1) {
//		
//	}
//	return -1;
//}
int kiemtraKhac (char s[]) {
	int somo=0;
	int sodong=0;
	int n = strlen(s);
	for (int i=0; i<n; i++) {
		if (s[i]=='(')
			somo++;
		else if (s[i]==')')
			sodong++;
		if (somo<sodong)
			return -1;
	}
	return 1;
}
int kiemTrahopLe(char s[]) {
	if (soDaumongoac(s)==soDaudongngoac(s) && kiemtraKhac(s)==1 )
		return 1;
	return -1;
}
int soDaumongoac(char s[]) {
	int d=0;
	int n =strlen(s);
	for (int i=0; i<n; i++) {
		if (s[i]=='(')
			d++;
	}
	return d;
}
int soDaudongngoac(char s[]) {
	int d=0;
	int n =strlen(s);
	for (int i=0; i<n; i++) {
		if (s[i]==')')
			d++;
	}
	return d;
}