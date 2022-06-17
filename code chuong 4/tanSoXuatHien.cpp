#include<iostream>
using namespace std;
void nhap(int a[], int &n);
void tanSuat (int a[], int n);
int main() {
	int a[100], n;
	nhap(a,n);
	tanSuat(a,n);
}
void nhap(int a[], int &n) {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
}
void tanSuat (int a[], int n) {
	int d;
	for (int i=0; i<n; i++) {
		d=0;
		for (int j=0; j<n; j++) {
			if (a[i]==a[j]) {
				if (i<=j)
					d++;
				else
					break;
			}
		}
		if (d!=0)
			cout<<"Gia tri "<<a[i]<< " co tan so xuat hien la "<< d <<endl;
	}
}