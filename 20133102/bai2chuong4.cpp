#include<iostream>
using namespace std;
void nhapMang(int a[100], int &n);
int tongMang(int a[], int n);
int main() {
	int a[100],n;
	nhapMang(a,n);
	cout<<tongMang(a,n);
}
int tongMang(int a[], int n) {
	int tong=0;
	for (int i=0; i<n; i++) {
		tong+=a[i];
	}
	return tong;
}
void nhapMang(int a[100], int &n) {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
}