#include<iostream>
using namespace std;
void phanLoaiKyty(char s[]);
int main() {
	char s[100];
	cin>>s;
	phanLoaiKyty(s);
}
void phanLoaiKyty(char s[]) {
	int demSo=0;
	int demChuthuong=0;
	int demChuhoa=0;
	int demKytudacBiet=0;
	int len = strlen(s);
	for (int i=0; i<len; i++) {
		if (s[i]>='0'&&s[i]<='9')
			demSo++;
		else if ((s[i]>='a'&&s[i]<='z'))
			demChuthuong++;
		else if (s[i]>='A'&&s[i]<='Z')
			demChuhoa++;
		else 
			demKytudacBiet++;
		}
	cout<<"So: "<<demSo<<endl;
	cout<<"So chu thuong: "<<demChuthuong<<endl;
	cout<<"So chu hoa: "<<demChuhoa<<endl;
	cout<<"So ky tu dac biet: "<<demKytudacBiet;
}