#include<iostream>
using namespace std;
bool isNguyenTo(int n);
int NguyentoMin(int a[], int n);
void nhapMang(int a[100], int &n);
int main() {
	int a[100],n;
	nhapMang(a,n);
	cout<<NguyentoMin(a,n);
}
bool isNguyenTo(int n) {
	if (n<2) {
		return false;
	}
	for (int i=2; i<n; i++) {
		if (n%i==0)
			return false;
	}
	return true;
}
int NguyentoMin(int a[], int n) {
	int NTmin=-1;
	for (int i=0; i<n; i++) {
		if (isNguyenTo(a[i]) && (a[i]<NTmin || NTmin==-1)) {
			NTmin=a[i];
		}
	}
	return NTmin;
}
void nhapMang(int a[100], int &n) {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
}