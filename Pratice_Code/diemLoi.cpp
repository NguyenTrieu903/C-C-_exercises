#include<iostream>
#define SIZE 101
using namespace std;
void nhapmang(int a[][SIZE], int &m, int &n);
void xuatmang (int a[][SIZE], int m, int n);
int laDiemLom (int a[][SIZE], int i, int j);
int demDiemLom (int a[][SIZE], int m, int n);
int main () {
	int a[SIZE][SIZE];
	for(int i=0;i<SIZE;i++)
		for(int j=0;j<SIZE;j++)
			a[i][j]=101;
	int m,n;
	nhapmang(a,m,n);
	cout<<demDiemLom(a,m,n);
}
int demDiemLom (int a[][SIZE], int m, int n) {
	int d=0;
	for (int i=2; i<=m+1; i++)
		for (int j=2; j<=n+1; j++)
			if (laDiemLom(a,i,j))
				d+=a[i][j];
	return d;
}
int laDiemLom (int a[][SIZE], int i, int j) {
	int x[8]= {-2,-1,-1,0,0,1,1,2};
	int y[8]= {0,-1,1,-2,2,-1,1,0};
	for (int k=0; k<8; k++)
		if (a[i][j] >= a[i+x[k]][j+y[k]])
            return 0;
	return 1;
}
void nhapmang(int a[][SIZE], int &m, int &n) {
	cin>>m>>n;
	for (int i=2; i<=m+1; i++) {
		for (int j=2; j<=n+1; j++)
			cin>>a[i][j];
	}
}