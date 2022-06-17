#include<iostream>
#define SIZE 100
using namespace std;
void nhapmang(int a[][SIZE], int &m, int &n);
void xuatmang (int a[][SIZE], int m, int n);
//int laDiemLoi (int a[][SIZE], int i, int j);
int demDiemloi (int a[][SIZE], int m, int n);
int laDiemLoi (int a[][SIZE], int i, int j);
void xuat (int x);
int main () {
	int a[SIZE][SIZE]= {0};
	int c[10000];
	int d[10000];
	int m,n;
	nhapmang(a,m,n);
	xuatmang(a,m,n);
	cout<<endl;
	cout<<demDiemloi(a,m,n);
//	int vitri = timVitriDiemloiNhonhat(a,m,n,d,c);
//	xuat(d[vitri]);
//	xuat(c[vitri]);
//	cout<<demDiemloi(a,m,n);
}
int demDiemloi (int a[][SIZE], int m, int n) {
	int d=0;
	for (int i=2; i<=m+1; i++)
		for (int j=2; j<=n+1; j++)
			if (laDiemLoi(a,i,j)==1)
				d++;
	return d;
}
int laDiemLoi (int a[][SIZE], int i, int j) {
	int d=0;
	int X[8]= {-2, -1, -1, 0, 0, 1, 1, 2};
	int Y[8]= {0, -1, 1, -2, 2, -1, 1, 0};
	for (int k=0; k<8; k++)
		if (a[i][j] > a[i+X[k]][j+Y[k]])
			d++;
	if(d==8)
		return 1;
	return 0;
}
void nhapmang(int a[][SIZE], int &m, int &n) {
	cin>>m>>n;
	for (int i=2; i<=m+1; i++) {
		for (int j=2; j<=n+1; j++)
			cin>>a[i][j];
	}
}
void xuat (int x) {
	cout<<x<<" ";
}
void xuatmang (int a[][SIZE], int m, int n) {
	for (int i=0; i<m+4; i++) {
		for (int j=0; j<n+4; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}