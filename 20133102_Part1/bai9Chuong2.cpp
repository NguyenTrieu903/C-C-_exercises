#include<iostream>
#include<string>
using namespace std;
void nhap(int &n);
int nhiPhan(int n);
void xuat(int kq);
int batPhan (int n);
void thapLucphan (int n);
int main (){
	int n;
	nhap(n);
	xuat(nhiPhan(n));
	cout<<endl;
	xuat(batPhan(n));
	cout<<endl;
	thapLucphan(n);
}
void thapLucphan (int n){
	char s[20];
	int d=0;
	int m;
	while (n>0){
		m=n%16;
		if (m>=10){
			s[d++]=char (m+55);
		}else {
			s[d++]=char (m+48);
		}
		n=n/16;
	}
	for (int i=d-1;i>=0;i--)
		cout<<s[i];
}
int batPhan (int n){
	int t,s,i;
	t=0;
	s=0;
	i=1;
	while (n!=0){
		s=n%8;
		t=t+s*i;
		i=i*10;
		n=n/8;
	}
	return t;
}
int nhiPhan(int n){
	int t,s,i;
	t=0;
	s=0;
	i=1;
	while (n!=0){
		s=n%2;
		t=t+s*i;
		i=i*10;
		n=n/2;
	}
	return t;
}
void nhap(int &n){
	cin>>n;
}
void xuat(int kq){
	cout<<kq;
}