#include<iostream>
using namespace std;
int UCLNmang(int a[], int n);
int UCLN (int a, int b);
void nhapMang(int a[100], int &n);
int main() {
	int a[100],n;
	nhapMang(a,n);
	cout<<UCLNmang(a,n);
}
int UCLNmang(int a[], int n) {
	int ucln=a[0];
	for (int i=1; i<=n; i++) {
		ucln= UCLN(ucln,a[i]);
	}
	return ucln;
}
int UCLN (int a, int b) {
	int r;
	while (b!=0) {
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
void nhapMang(int a[100], int &n) {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
}