#include<iostream>
#include<string.h>
using namespace std;
struct LINHKIEN {
	char ten[31];
	char quycach[11];
	char loai;
	int dongia;
};
void nhap (LINHKIEN a[100], int &n);
void nhap1Linhkien(LINHKIEN&x);
void xuat (LINHKIEN a[], int n);
void xuat1Linhkien(LINHKIEN x);
void sapXeptheoTen(LINHKIEN a[], int n);
void sapXeptheoLoai(LINHKIEN a[], int n);
void sapXeptheoLoaiTen(LINHKIEN a[], int n);
bool kiemTra(LINHKIEN a[], int n);
void lietkeTheoTen(LINHKIEN a[], int n,char ten[]);
int main () {
	LINHKIEN a[100];
	int n;
	nhap(a,n);
	sapXeptheoLoaiTen(a,n);
	xuat(a,n);
	bool kt=kiemTra(a,n);
	if (kt)
		cout<<"Da du"<<endl;
	else
		cout<<"Chua du"<<endl;
	char ten[31];
	fflush(stdin);
	cout<<"Nhap vao ten linh kien can liet ke : ";
	cin.getline(ten,31);
	lietkeTheoTen(a,n,ten);
	return 0;
}
void lietkeTheoTen(LINHKIEN a[], int n,char ten[]) {
	bool co = false;
	for (int i=0; i<n; i++) {
		if (strcmp(a[i].ten,ten)==0) {
			xuat1Linhkien(a[i]);
			co=true;
		}
	}
	if (!co)
		cout<<"Khong tim thay linh kien ";
}
bool kiemTra(LINHKIEN a[], int n) {
	int d=0;
	for (int i=0; i<n; i++) {
		if (a[i].loai=='A' || a[i].loai=='a') {
			d++;
		}
	}
	return d>9;
}
void sapXeptheoLoaiTen(LINHKIEN a[], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if ((a[i].loai>a[j].loai)||( (a[i].loai==a[j].loai && strcmp(a[i].ten,a[j].ten)>0)) ) {
				LINHKIEN t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
void sapXeptheoLoai(LINHKIEN a[], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (a[i].loai>a[j].loai) {
				LINHKIEN t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
void sapXeptheoTen(LINHKIEN a[], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (strcmp(a[i].ten,a[j].ten)>0) {
				LINHKIEN t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
void xuat1Linhkien(LINHKIEN x) {
	cout<<"Ten : "<<x.ten<<endl;
	cout<<"Quy cach : "<<x.quycach<<endl;
	cout<<"Loai : "<<x.loai<<endl;
	cout<<"Don gia : "<<x.dongia<<endl;
}
void xuat (LINHKIEN a[], int n) {
	cout<<"-------------------------------------"<<endl;
	for (int i=0; i<n; i++)
		xuat1Linhkien(a[i]);
}
void nhap1Linhkien(LINHKIEN&x) {
	fflush(stdin);
	cout <<"Nhap ten : ";
	cin.getline(x.ten,31);
	cout <<"Nhap quy cach : ";
	fflush(stdin);
	cin.getline(x.quycach,11);
	cout <<"Nhap loai : ";
	cin>>x.loai;
	cout <<"Nhap don gia : ";
	cin>>x.dongia;
}
void nhap (LINHKIEN a[100], int &n) {
	cin>>n;
	for (int i=0; i<n; i++) {
		nhap1Linhkien(a[i]);
	}
}