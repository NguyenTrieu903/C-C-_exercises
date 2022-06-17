#include<iostream>
#define SIZE 20
using namespace std;
void lietKeToHop(int n, int k, int B[], int &nb);
void xuat (int a[], int n);
void gan(int a[], int n, int B[], int &nb);
int main() {
	int B[100],nb;
	int n,k;
	cin>>n;
	for (k=0; k<n; k++)
		lietKeToHop(n,k,B,nb);
	return 0;
}
void gan(int a[], int n, int B[], int &nb) {
	nb=0;
	for (int i=0; i<n; i++) {
		B[nb++]=a[i];
	}
}
void lietKeToHop(int n, int k, int B[], int &nb) {
	int a[SIZE];
	int i;
	for (i=0; i<k; i++) {
		a[i]=i;
	}
//	xuat(a,k);
	gan(a,k,B,nb);
	xuat(B,nb);
//	B[nb++]=a[i];
	i=k-1;
	while(i>=0) {
		while (a[i]<n-k+i) {
			a[i]++;
			for (int j=i+1; j<k; j++)
				a[j]=a[j-1]+1;
			gan(a,k,B,nb);
			xuat(B,nb);
//			xuat(a,k);
			i=k-1;
		}
		i--;
	}
}
void xuat (int a[], int n) {
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}