#include<iostream>
#define SIZE 50
using namespace std;
void xuat(int a[], int n);
void sinhNhiPhan (int n);
int dem=0;
int main() {
	int n;
	cin>>n;
	sinhNhiPhan(n);
	cout<<dem;
}
void sinhNhiPhan (int n) {
	int a[SIZE]= {0};
	int i;
	do {
		i=n-1;
		xuat(a,n);
		while(i>=0 && a[i]==1) {
			a[i]=0;
			i--;
		}
		if (i>=0)
			a[i]=1;
	} while(i>=0);

}
void xuat(int a[], int n) {
	dem++;
//	cout<<"{";
	for (int i=0; i<n; i++)
		if (a[i]==1)
			cout<<i<<" ";
//	cout<<"}";
	cout<<endl;
}