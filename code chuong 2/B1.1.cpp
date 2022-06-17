#include<iostream>
using namespace std;
void nhap(int a[], int &n);
int timSo (int a[], int n , int x);
void xuat (int x);
int main (){
	int a[100],n,x;
	nhap(a,n);
	int res = timSo(a,n,x);
	xuat(res);	
}
int timSo (int a[], int n , int x){
	cin>>x;
	int i=0;
	a[n]=x;
	while (a[i]!=x){
		i++;
	}
	if (i<n)
		return 1;
	return 0;
	
}
void nhap(int a[], int &n){
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
}
void xuat (int x){
	cout<<x;
}