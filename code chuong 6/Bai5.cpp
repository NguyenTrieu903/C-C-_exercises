#include<iostream>
using namespace std;
void nhap(int a[][100], int &m, int &n);
void xuat(int a[][100], int m, int n);
void tich2Matran (int a[][100], int b[][100], int c[][100],int m, int n, int k);
int main() {
	int a[100][100],m,n;
	int b[100][100],k;
	int c[100][100];
	nhap(a,m,n);
	nhap(b,n,k);
	tich2Matran(a,b,c,m,n,k);
	xuat(c,m,k);
}
void tich2Matran (int a[][100], int b[][100], int c[][100],int m, int n, int k) {
	for (int i=0; i<m; i++) {
		for (int j=0; j<k; j++) {
			for (int l=0; l<n; l++) {
				c[i][j]+=a[i][l]*b[l][j];
			}
		}
	}
}
void nhap(int a[][100], int &m, int &n) {
	cin>>m>>n;
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			cin>>a[i][j];
		}
	}
}
void xuat(int a[][100], int m, int n) {
	for (int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}