#include<iostream>
using namespace std;
void nhap(int a[], int&m , int &n);
void chuyenMang1thanh2(int a[], int m , int n, int b[][100]);
void xuat (int a[][100], int m , int n);
int main (){
	int m , n;
	int a[100],b[100][100];
	nhap(a,m,n);
	chuyenMang1thanh2(a,m,n,b);
	xuat(b,m,n);
}
void chuyenMang1thanh2(int a[], int m , int n, int b[][100]){
	int k=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			b[i][j]=a[k++];
		}
	}
}
void nhap(int a[], int&m , int &n){
	cin>>m>>n;
	for (int i=0;i<m*n;i++)
		cin>>a[i];
}
void xuat (int a[][100], int m , int n){
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}