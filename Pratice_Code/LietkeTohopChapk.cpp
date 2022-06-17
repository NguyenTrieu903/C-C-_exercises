#include<iostream>
#define SIZE 20
using namespace std;
void lietKeToHop(int n, int k);
void xuat (int a[], int n);
int main() {
	int n,k;
	cin>>n>>k;
	lietKeToHop(n,k);
	return 0;
}
void lietKeToHop(int n, int k) {
	int a[SIZE];
	int i;
	for (i=0; i<k; i++) {
		a[i]=i;
	}
	xuat(a,k);
	i=k-1;
	do {
		while (a[i]<n-k+i) {
			a[i]++;
			for (int j=i+1; j<k; j++)
				a[j]=a[j-1]+1;
			xuat(a,k);
			i=k-1;
		}
		i--;
	} while(i>=0);
}
void xuat (int a[], int n) {
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}