#include<iostream>
using namespace std;
void chuyenMang2thanh1(int a[][100], int m, int n , int b[100], int&nb);
void nhap (int a[100][100], int &m , int &n);
void xuat(int b[], int nb);
int main (){
	int a[100][100],m,n;
	int b[100],nb;
	nhap(a,m,n);
	chuyenMang2thanh1(a,m,n,b,nb);
	xuat(b,nb);
}
void chuyenMang2thanh1(int a[][100], int m, int n , int b[100], int&nb){
	nb=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			b[nb++]=a[i][j];
		}
	}
}
void nhap (int a[100][100], int &m , int &n){
	cin>>m>>n;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++)
			cin>>a[i][j];
	}
}
void xuat(int b[], int nb){
	for (int i=0;i<nb;i++)
		cout<<b[i]<<" ";
}