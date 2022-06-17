#include<iostream>
using namespace std;
int timMax(int a, int b);
//int xuly(int a[], int n);
void xuly(int a[], int n, int b[100], int &nb);
void nhap(int a[100], int &n);
int kiemTraTonTai(int a[100], int n, int x) ;
void xuat (int a[100], int n);
int main() {
	int n;
	int a[100];
	int b[100],nb;
	nhap(a,n);
//	cout<<xuly(a,n);
	xuly(a,n,b,nb);
	xuat(b,nb);
}
void nhap(int a[100], int &n) {
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>a[i];
}
void xuat (int a[100], int n) {
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
}
int timMax(int a, int b) {
	if(a>b)
		return a;
	return b;
}
int kiemTraTonTai(int a[100], int n, int x) {
	for (int i=0; i<n; i++) {
		if (a[i]==x)
			return 0;
	}
	return 1;
}
void xuly(int a[], int n, int b[100], int &nb) {
	int x;
	for (int i=0; i<n-1; i++) {
		x=0;
		b[nb++]=a[i];
		for (int j=i+1; j<n; j++) {
			x=a[i]+a[j];
			if(x%7==0 && kiemTraTonTai(b,nb,a[j])==0)
			        b[nb++]=a[j];
		}
}
}