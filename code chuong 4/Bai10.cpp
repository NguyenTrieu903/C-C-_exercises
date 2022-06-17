#include<iostream>
using namespace std;
void nhap(int a[], int &n);
void phanTuKhacNhau (int a[], int n, int b[], int &nb);
void xuat (int a[], int n);
bool timThay (int a[], int n, int k);
void demSoLan (int a[], int n, int b[], int nb, int c[], int &nc);
int timPhanTu (int b[], int nb, int c[],int nc);
int main() {
	int a[100], n;
	int b[100], nb;
	int c[100], nc;
	nhap(a,n);
	phanTuKhacNhau(a,n,b,nb);
	demSoLan(a,n,b,nb,c,nc);
	cout<<timPhanTu(b,nb,c,nc);
}
int timPhanTu (int b[], int nb, int c[],int nc) {
	int max=c[0];
	int vtr=0;
	for (int i=1; i<nc; i++) {
		if (c[i]>max) {
			max=c[i];
			vtr=i;
		}
	}
	return b[vtr];
}
void demSoLan (int a[], int n, int b[], int nb, int c[], int &nc) {
	int d=0;
	nc=0;
	for (int i=0; i<nb; i++) {
		d=0;
		for (int j=0; j<n; j++) {
			if (b[i]==a[j]) {
				d++;
			}
		}
		c[nc++]=d;
	}
}
bool timThay (int a[], int n, int k) {
	for (int i=k+1; i<n; i++) {
		if (a[k]==a[i])
			return true;
	}
	return false;
}
void phanTuKhacNhau (int a[], int n, int b[], int &nb) {
	nb=0;
	for (int i=0; i<n; i++) {
		if (timThay(a,n,i) == false) {
			b[nb]=a[i];
			nb++;
		}
	}
}
void xuat (int a[], int n) {
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
}
void nhap(int a[], int &n) {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
}