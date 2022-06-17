#include<iostream>
using namespace std;
void nhap(int a[100], int &n);
int chanMax (int a[100], int n);
int leMinlonHonChan (int a[], int n);
void hoanVi(int &a, int &b);
void sapLetang (int a[], int n);
void xuat (int a[], int n);
int main() {
	int a[100],n;
	nhap(a,n);
	cout<<leMinlonHonChan(a,n);
}
int leMinlonHonChan (int a[], int n) {	
	for (int i=0; i<n; i++) {
		if(a[i]>chanMax(a,n) && a[i]%2!=0) {
			return a[i];
		}
	}
}
void hoanVi(int &a, int &b) {
	int tmp=a;
	a=b;
	b=tmp;
}
void sapLetang (int a[], int n) {
	for (int i=0; i<n-1; i++) {
		if (a[i]%2!=0) {
			for (int j=i+1; j<n; j++) {
				if (a[i]%2!=0 && a[j]<a[i]) {
					hoanVi(a[j],a[i]);
				}
			}
		}
	}
}
int chanMax (int a[100], int n) {
	int max=-1;
	for (int i=0; i<n; i++) {
		if (a[i]>max && a[i]%2==0) {
			max=a[i];
		}
	}
	return max;
}
void nhap(int a[100], int &n) {
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>a[i];
}
void xuat (int a[], int n) {
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
}