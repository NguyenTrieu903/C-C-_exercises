#include<iostream>
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);
void xoaPhantu (int a[], int &n, int vitri);
void xoaTrungnhau (int a[], int &n);
int main() {
	int a[100],n;
	nhap(a,n);
	xoaTrungnhau(a,n);
	xuat(a,n);
}
void xoaTrungnhau (int a[], int &n) {
	bool flag;
	int i=0;
	while(i<n) {
		int j=i+1;
		flag=false;
		while(j<n) {
			if (a[i]==a[j]) {
				xoaPhantu(a,n,j);
				flag=true;
			} else {
				j++;
			}
		}
		if (flag) {
			xoaPhantu(a,n,i);
		} else
			i++;
	}
}
void xoaPhantu (int a[], int &n, int vitri) {
	for (int i=vitri; i<n-1; i++) {
		a[i]=a[i+1];
	}
	n--;
}
void nhap(int a[], int &n) {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
}
void xuat(int a[], int n) {
	for (int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}
}