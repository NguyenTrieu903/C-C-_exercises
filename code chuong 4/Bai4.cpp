#include<iostream>
using namespace std;
void nhapMang(int a[100], int &n);
void xuat(int a[], int n);
int timNhiPhan(int a[], int n, int left, int right, int x);
int main() {
	int a[100],n,x;
	nhapMang(a,n);
	cin>>x;
	cout<<timNhiPhan(a,n,0,n-1,x);
}
int timNhiPhan(int a[], int n, int left, int right, int x) {
	if (right>=left) {
		int middle = (left+right)/2;
		if (x==a[middle]) {
			return 1;
		}
		if (x>a[middle])
			timNhiPhan(a,n,middle+1,right,x);
		else
			timNhiPhan(a,n,left,middle-1,x);
	}
	return -1;
}
void xuat(int a[], int n) {
	for (int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}
}
void nhapMang(int a[100], int &n) {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
}