#include<iostream>
#define SIZE 100
using namespace std;
void nhapmang(int a[][SIZE], int &m , int &n);
void xuatmang (int a[][SIZE], int m , int n);
int laDiemLoi (int a[][SIZE], int i , int j);
int demDiemloi (int a[][SIZE], int m , int n);
int timMin(int a[], int n);
int minDiemLoi(int a[][SIZE], int m, int n);
int vitriMin (int b[], int nb);
int timVitriDiemloiNhonhat(int a[][SIZE],int m,int n, int d[], int c[]);
void xuat (int x);
int main (){
	int a[SIZE][SIZE]={0};
	int c[10000];
	int d[10000];
	int m,n;
	nhapmang(a,m,n);
//	int kq = demDiemloi(a,m,n);
//	int kq = minDiemLoi(a,m,n);
	int vitri = timVitriDiemloiNhonhat(a,m,n,d,c);
	xuat(d[vitri]-2);
	cout<<endl;
	xuat(c[vitri]-2);
//	xuat(kq);
}
int vitriMin (int b[], int nb){
	int min =b[0];
	int vitri=0;
	for (int i=1;i<nb;i++){
		if (b[i]<min)
			min=b[i];
			vitri=i;
	}
	return vitri;
}
int timVitriDiemloiNhonhat(int a[][SIZE],int m,int n, int d[], int c[]){
	int b[10000],nb=0;
	for (int i=1;i<=m;i++)
		for (int j=1;j<=n;j++)
			if (laDiemLoi(a,i,j)){
				b[nb]=a[i][j];
				d[nb]=i;
				c[nb]=j;
				nb++;
			}
	int vitri = vitriMin (b,nb);
	return vitri;
}
int timMin(int a[], int n){
	int min =a[0];
	for (int i=1;i<n;i++){
		if (a[i]<min)
			min=a[i];
	}
	return min;
}
int minDiemLoi(int a[][SIZE], int m, int n){
	int b[10000],nb=0;
	for (int i=1;i<=m;i++)
		for (int j=1;j<=n;j++)
			if (laDiemLoi(a,i,j)){
				b[nb++]=a[i][j];
//				cout<<a[i][j]<<endl;
			}
	int min = timMin (b,nb);
	return min;
}
int demDiemloi (int a[][SIZE], int m , int n){
	int d=0;
	for (int i=1;i<=m;i++)
		for (int j=1;j<=n;j++)
			if (laDiemLoi(a,i,j))
				d++;
	return d;
}
int laDiemLoi (int a[][SIZE], int i , int j){
	int x[4]={0,0,1,-1};
	int y[4]={-1,1,0,0};
	for (int k=0;k<4;k++)
		if (a[i][j] <= a[i+x[k]][j+y[k]])
			return 0;
	return 1;
}
void nhapmang(int a[][SIZE], int &m , int &n){
	cout<<"nhap vao so dong va so cot"<<endl;
	cin>>m>>n;
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++)
			cin>>a[i][j];
	}
}
void xuat (int x){
	cout<<x;
}
void xuatmang (int a[][SIZE], int m , int n){
	for (int i=0;i<m+2;i++){
		for (int j=0;j<n+2;j++)
			cout<<a[i][j]<<" ";
	cout<<endl;
	}
}