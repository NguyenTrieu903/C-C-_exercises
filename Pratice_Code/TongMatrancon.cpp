#include<iostream>
using namespace std;
void nhap(int a[][100], int &m, int &n);
void xuat(int a[][100], int m, int n);
int summation(int a[100][100], int m, int n);
void Tong (int a[][100], int m, int n);
int main() {
	int a[100][100],m,n;
	nhap(a,m,n);
	xuat(a,m,n);
//	cout<<Tong(a,m,n);
	Tong(a,m,n);
}
void Tong (int a[][100], int m, int n) {
	int sum=0;
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			sum+=summation(a,m,n);
		}
	}
	cout<<sum;
}
int summation(int a[100][100], int m, int n) {
	int sum;
	for(int x=3; x<3+m; x++)
		for(int y=3; y<3+n; y++)
			sum += a[x][y];
	return sum;
}
void nhap(int a[][100], int &m, int &n) {
	cin>>m>>n;
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++)
			cin>>a[i][j];
	}
}
void xuat(int a[][100], int m, int n) {
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}