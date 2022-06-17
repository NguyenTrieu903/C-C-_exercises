#include<iostream>
#define SIZE 25
using namespace std;
int max1=0;
int a[SIZE],n;
int b[SIZE],nb;
int c[SIZE],nc;
int s;
void lietKeNP(int k);
bool kiemTra(int a[], int n);
void xuat();
void nhap(int b[SIZE], int nb);
int xuLy(int a[], int nb,int b[], int s);
int tong (int a[], int n);
void xuatkhac(int c[SIZE], int nc);
int maxMang(int c[], int nc);
int main() {
	cin>>nb>>s;
	nc=0;
	nhap(b,nb);
	lietKeNP(0);
	cout<<max1;
}
int xuLy(int a[], int nb,int b[], int s) {
	int d=0;
	for(int i=0; i<nb; i++) {
		if(a[i]==1)
			a[i]=b[i];
	}
	int x=tong(a,nb);
	if(x%s==0) {
		return x;
	}else 
		return 0;
}
int max(int a, int b) {
	if (a>b)
		return a;
	return b;
}
int tong (int a[], int n) {
	int t=0;
	for(int i=0; i<n; i++)
		t+=a[i];
	return t;
}
void lietKeNP(int k) {
	if(k==nb) {
		int t = xuLy(a,nb,b,s);
		max1=max(max1,t);
	} else {
		for(int i=0; i<=1; i++) {
			a[k]=i;
			lietKeNP(k+1);
		}
	}
}
void nhap(int b[SIZE], int nb) {
	for(int i=0; i<nb; i++)
		cin>>b[i];
}
void xuatkhac(int c[SIZE], int nc) {
	for(int i=0; i<nc; i++) {
		cout<<c[i]<<" ";
	}
}
void xuat() {
	for (int i=0; i<nb; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}