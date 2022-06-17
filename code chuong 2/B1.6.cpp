#include<iostream>
using namespace std;
void nhap (int a[], int &n);
void ghepMang(int a[], int nA , int b[] , int nB,int c[],int &nC);
void xuat (int c[], int nC);
int main (){
	int a[100],b[100],c[200];
	int nA,nB,nC;
	nhap(a,nA);
	nhap(b,nB);
	ghepMang(a,nA,b,nB,c,nC);
	xuat(c,nC);
	return 0;
}
void ghepMang(int a[], int nA ,  int b[] , int nB,int c[],int &nC){
	int i,j;
	i=0;
	j=0;
	nC=0;
	while (i<nA&&j<nB){
		c[nC++]=a[i];
		c[nC++]=b[j];
		i++;
		j++;
	}
	while (i<nA){
		c[nC++]=a[i];
		i++;
	}
	while (j<nB){
		c[nC++]=b[j];
		j++;
	}
}
void nhap (int a[], int &n){
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
}
void xuat (int c[], int nC){
	for (int i=0;i<nC;i++)
		cout<<c[i]<<" ";
}