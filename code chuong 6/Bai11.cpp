#include<iostream>
using namespace std;
void nhap (int a[], int &n);
void xuat (int a[], int n);
void xuLy(int a[], int n, int l[100]);
void truyVet(int l[], int n, int kq[], int &nKQ, int a[]);
void xuatKq(int a[], int n);
int main() {
	int a[100],n,kq[100],nKQ;
	int l[100];
	nhap(a,n);
	xuLy(a,n,l);
	truyVet(l,n,kq,nKQ,a);
//	xuatKq(kq,nKQ);
	cout<<nKQ;
}
void truyVet(int l[], int n, int kq[], int &nKQ,int a[]) {
	nKQ=0;
	int i=n+1;
	int k=i-1;
	while(l[i]>2) {
		if ((l[i]==l[k]+1) && (a[k]<a[i])) {
			kq[nKQ++]=a[k];
			i=k;
			k=i-1;
		} else {
			k--;
		}
	}
}
void xuLy(int a[], int n, int l[100]) {
	for (int i=0; i<=n+1; i++) {
		l[i]=1;
		for (int j=0; j<i; j++) {
			if (a[j]<=a[i] && l[i]<l[j]+1)
				l[i]=l[j]+1;
		}
	}
}
void nhap (int a[], int &n) {
	cin>>n;
	a[0]=-10000;
	a[n+1]=10000;
	for (int i=1; i<=n; i++)
		cin>>a[i];
}
void xuat (int a[], int n) {
	for (int i=0; i<=n+1; i++) {
		cout<<a[i]<<" ";
	}
}
void xuatKq(int a[], int n) {
	for (int i=n-1; i>=0; i--)
		cout<<a[i]<<" ";
}