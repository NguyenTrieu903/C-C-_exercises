#include<iostream>
#define SIZE 20
using namespace std;
int a[SIZE],n,dem;
void lietkeNP(int k);
void xuat();
int tong ();
int main() {
	cin>>n;
	dem=0;
	lietkeNP(0);
	cout<<dem;
}
void lietkeNP(int k) {
	if (k==n) {
		cout<<"Xuat mang "<<endl;
		xuat();
	} else if (tong()==0) {
		cout<<"Xuat tong"<<endl;
		xuat();
	} else {
		for (int i=0; i<=1; i++) {
//			cout<<"K: "<<k<<endl;
//			cout<<"i: "<<i<<endl;
			a[k]=i;
			lietkeNP(k+1);
		}
	}
}
int tong () {
	int t=0;
	for (int i=0; i<n; i++) {
		t=t+a[i];
	}
	return t;
}
void xuat() {
	dem++;
	for (int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
}