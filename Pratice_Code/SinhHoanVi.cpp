#include<iostream>
#define SIZE 20
using namespace std;
int dem=0;
void sinhHoanVi(int n);
void xuat (int a[], int n);
void doiCho(int &a, int &b);
void latNguoc(int a[], int x, int y);
int main() {
	int n;
	cin>>n;
	sinhHoanVi(n);
	cout<<dem;
	return 0;
}
void xuat (int a[], int n) {
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void sinhHoanVi(int n) {
	int a[SIZE];
	for (int i=0; i<n; i++) {
		a[i]=i;
	}
	xuat(a,n);
	dem++;
	do {
		int k=n-2;
		while(k>=0 && a[k]>a[k+1])
			k--;
		if (k<0)
			break;
		int l=n-1;
		while(a[l]<a[k])
			l--;
		doiCho(a[k],a[l]);
		latNguoc(a,k+1,n-1);
		xuat(a,n);
		dem++;
	} while(true);
}
void latNguoc(int a[], int x, int y) {
	while(x<y) {
		doiCho(a[x],a[y]);
		x++;
		y--;
	}
}
void doiCho(int &a, int &b) {
	int t=a;
	a=b;
	b=t;
}