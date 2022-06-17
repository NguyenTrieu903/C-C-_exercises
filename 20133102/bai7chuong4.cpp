#include<iostream>
#include<string.h>
using namespace std;
int tongChuoi(char s[]);
int main() {
	char s[100];
	cin>>s;
	cout<<tongChuoi(s);
}
int tongChuoi(char s[]) {
	int tong=0;
	int so=0;
	int len = strlen(s);
	for (int i=0; i<=len; i++) {
		if (s[i]>='0'&&s[i]<='9') {
			so=so*10+(s[i]-'0');
		}else {
			tong+=so;
			so=0;
		}
	}
	return tong;
}