#include<iostream>
using namespace std;
void nhap(int a[], int &n);
void xuat(int x);
int timStrongMangthuTu(int a[], int n , int x);
int main (){
	int a[100],n,x;
	nhap(a,n);
	int res = timStrongMangthuTu(a,n,x);
	xuat(res);
}
int timStrongMangthuTu(int a[], int n , int x){
	cin>>x;
	int left=0;
	int right=n-1;
	int middle=0;
	while (left<=right){
		middle = (left+right)/2;
		if (a[middle]==x)
			return 1;
		else if (x>a[middle]){
			left=middle+1;
		}
		else {
			right=middle-1;
		}
	}
	return -1;
}
void nhap(int a[], int &n){
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
}
void xuat(int x){
	cout<<x;
}