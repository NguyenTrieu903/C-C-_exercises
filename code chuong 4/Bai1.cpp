#include<iostream>
using namespace std;
int phantuMin(int a[], int n);
void nhapMang(int a[100], int &n);
int main() {
	int a[100],n;
	nhapMang(a,n);
	cout<<phantuMin(a,n);
}
int phantuMin(int a[], int n) {
	int min=a[0];
	for (int i=1;i<n;i++){
		if (a[i]<min){
			min=a[i];
		}
	}
	return min;
}
void nhapMang(int a[100], int &n) {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
}