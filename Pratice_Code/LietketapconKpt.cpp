#include<iostream>
#define SIZE 20
using namespace std;
int a[SIZE]= {0},n,k;
void xuat();
void lietKetapCon(int i);
int main() {
	cin>>n;
	cin>>k;
	a[0]=0;
	lietKetapCon(1);
}
void xuat() {
	for (int i=1; i<=k; i++) {
		cout<<a[i]<<" ";
	}
//	cout<<a[k];
	cout<<endl;
}
void lietKetapCon(int i) {
	for (int j=a[i-1]+1 ; j<=n-k+i; j++) {
//		xuat();
//		cout<<"i: "<<i<<endl;
//		cout<<"j: "<<j<<endl;
		a[i]=j;
		if (i==k) {
			xuat();
		} else {
			lietKetapCon(i+1);
		}
	}
}