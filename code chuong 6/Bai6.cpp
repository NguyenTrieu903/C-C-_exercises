#include<iostream>
using namespace std;
void nhapmang(int a[], int &n);
int xuatmang(int a[],int n);
void daycontang(int a[],int n, int b[100], int &nb,int &dem);
int main() {
	int a[100],n;
	int b[100],nb;
	int dem;
	nhapmang(a,n);
	daycontang(a,n,b,nb,dem);
	xuatmang(b,nb);
	cout<<endl;
	cout<<dem;
	return 0;
}
void nhapmang(int a[], int &n) {
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
}
int xuatmang(int a[],int n) {
	for(int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}
}
void daycontang(int a[],int n, int b[100], int &nb, int &dem) {
	nb=0;
	bool flag;
	int i;
	dem=0;
	for( i=0; i<n-1; i++) {
		flag=false;
		while(a[i]<a[i+1]) {
			b[nb++]=a[i];
			i++;
			if (i==n-1) {
				dem++;
//				cout<<dem;
				b[nb++]=a[i];
				return ;
			}
			flag=true;
		}
		if (flag) {
			dem++;
			b[nb++]=a[i];
		}
	}
}
