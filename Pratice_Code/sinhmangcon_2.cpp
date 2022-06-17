#include<iostream>
#define SIZE 25
using namespace std;
int max1=0;
int a[SIZE],n;
int b[SIZE],nb;
int c[SIZE],nc;
int s;
void lietKeNP(int k);
bool kiemTra(int a[], int n);
void xuat();
void nhap(int b[SIZE], int nb);
void xuLy(int a[], int nb,int b[], int s);
int tong (int a[], int n);
void xuatkhac(int c[SIZE], int nc);
int maxMang(int c[], int nc);
void xoaphantu(int a[], int &nb, int vitri);
int main() {
	cin>>nb>>s;
	nc=0;
	nhap(b,nb);
	lietKeNP(0);
	cout<<max1;
}
void xoaphantu(int a[], int &nb, int vitri) {
	for(int i=vitri; i<n-1; i++) {
		a[i]=a[i+1];
	}
	nb--;
}
void xuLy(int a[], int nb,int b[], int s) {
	int d=0;
	for(int i=0; i<nb; i++) {
		if(a[i]==1)
			a[i]=b[i];
	}
}
void lietKeNP(int k) {
	if(k==nb) {
		xuLy(a,nb,b,s);
		xuat();
	} else {
		for(int i=0; i<=1; i++) {
			a[k]=i;
			lietKeNP(k+1);
		}
	}
}
void nhap(int b[SIZE], int nb) {
	for(int i=0; i<nb; i++)
		cin>>b[i];
}
void xuatkhac(int c[SIZE], int nc) {
	for(int i=0; i<nc; i++) {
		cout<<c[i]<<" ";
	}
}
void xuat() {
	for (int i=0; i<nb; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}