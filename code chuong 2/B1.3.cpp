#include<iostream>
using namespace std;
void them (int a[], int &n , int x , int vtr);
void xoa (int a[], int &n , int vtr);
void sua(int a[],int n, int x , int vtr);
int timKiem(int a[], int n , int x);
void nhap (int a[], int &n);
void xuat (int a[], int n);
int main(){
	int a[100],n,x,vtr;
	nhap(a,n);
//	them(a,n,x,vtr);
//	xoa(a,n,vtr);
//	sua(a,n,x,vtr);
	int kq=timKiem(a,n,x);
	cout<<kq;
//	xuat(a,n);
}
int timKiem(int a[], int n , int x){
	cin>>x;
	a[n]=x;
	int i=0;
	while (a[i]!=x)
		i++;
	if (i<n)
		return 1;
	return 0;
}
void sua(int a[],int n, int x , int vtr){
	cin>>x>>vtr;
	if (vtr<0)
		vtr=0;
	else if (vtr>=n)
		vtr=n-1;
	for (int i=0;i<n;i++){
		if (i==vtr){
			a[i]=x;
		}
	}
}
void xoa (int a[], int &n, int vtr){
	cin>>vtr;
	if (vtr<0)
		vtr=0;
	else if (vtr>=n)
		vtr=n-1;
	for (int i=vtr;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
}
void them (int a[], int &n , int x , int vtr){
	cin>>x>>vtr;
	if (vtr<0)
		vtr=0;
	else if (vtr>n)
		vtr=n;
	for (int i=n;i>vtr;i--){
		a[i]=a[i-1];
	}
	a[vtr]=x;
	n++;
}
void nhap (int a[], int &n){
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
}
void xuat (int a[], int n){
	for (int i=0;i<n;i++)
		cout<<a[i]<<" ";
}