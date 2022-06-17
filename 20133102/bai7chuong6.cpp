#include<iostream>
using namespace std;
void nhapmang(int a[], int &n);
void xuLy(int a[],int n, int b[], int &nb);
int tinhtong (int a[], int n, int start, int end);
void dayContang(int a[], int n, int b[], int nb);
void xuatkhac(int a[], int n, int x, int y);
int main() {
	int a[100],n,b[100],nb,c[100],nc;
	nhapmang(a,n);
	xuLy(a,n,b,nb);
	dayContang(a,n,b,nb);
	return 0;
}
void nhapmang(int a[], int &n) {
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
}
void xuLy(int a[],int n, int b[], int &nb) {
	nb=0;
	int vtribatdau=0;
	int vtriketthuc=0;
	bool flag;
	for(int i=0; i<n-1; i++) {
		flag=false;
		vtribatdau=i;
		while(a[i]<a[i+1]) {
			i++;
			if (i==n-1) {
				b[nb++]=vtribatdau;
				b[nb++]=i;
				return ;
			}
			flag=true;
			vtriketthuc=i;
		}
		if (flag) {
			b[nb++]=vtribatdau;
			b[nb++]=vtriketthuc;
		}
//		b[nb++]=vtribatdau;
//		b[nb++]=vtriketthuc;
	}
}
int tinhtong (int a[], int n, int start, int end) {
	int tong=0;
	for (int i=start; i<=end; i++) {
		tong+=a[i];
	}
	return tong;
}
void xuatkhac(int a[], int n, int x, int y) {
	for (int i=x; i<=y; i++) {
		cout<<a[i]<< " ";
	}
}
void dayContang(int a[], int n, int b[], int nb) {
	int i=0;
	int x=0;
	int y=0;
	int max=0;
	int tong=0;
	while(i<nb-1) {
		tong = tinhtong(a,n,b[i],b[i+1]);
		if (tong>max) {
			max=tong;
			x=b[i];
			y=b[i+1];
		}
		i=i+2;
	}
	xuatkhac(a,n,x,y);
}
