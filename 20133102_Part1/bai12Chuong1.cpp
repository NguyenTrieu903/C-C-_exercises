#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
struct Phim {
	char tenPhim[30];
	char theLoai[20];
	char tenDaoDien [40];
	char tenNamChinh [40];
	char tenNuChinh [40];
	int namSX;
	char hangSX [30];
};
void nhap(Phim &x);
void nhapPhim (Phim a[], int &n);
void xuatPhim(Phim a[], int n);
void xuat (Phim ph);
void timKiemtheoTheLoai (Phim a[], int n);
void timKiemtheoDienvien (Phim a[], int n);
void timKiemtheoDaoDien (Phim a[], int n);
int main() {
	Phim ph[100];
	int n;
	nhapPhim(ph,n);
	xuatPhim(ph,n);
	timKiemtheoTheLoai(ph,n);
	cout<<endl;
	timKiemtheoDienvien(ph,n);
	cout<<endl;
	timKiemtheoDaoDien(ph,n);
}
void timKiemtheoDaoDien (Phim a[], int n) {
	char s[20];
	cout<<"Nhap ten dao dien: ";
	fflush(stdin);
	gets(s);
	for (int i=0; i<n; i++) {
		if(strcmp(a[i].tenDaoDien,s)==0) {
			xuat(a[i]);
		}
	}
}
void timKiemtheoDienvien (Phim a[], int n) {
	char s[20];
	cout<<"Nhap ten nam dien vien can tim: ";
	fflush(stdin);
	gets(s);
	for (int i=0; i<n; i++) {
		if(strcmp(a[i].tenNamChinh,s)==0) {
			xuat(a[i]);
		}
	}
}
void timKiemtheoTheLoai (Phim a[], int n) {
	char s[20];
	cout<<"Nhap the loai phim can tim: ";
	fflush(stdin);
	gets(s);
	for (int i=0; i<n; i++) {
		if(strcmp(a[i].theLoai,s)==0) {
			xuat(a[i]);
		}
	}
}
void xuatPhim(Phim a[], int n) {
	cout<<"--Danh sach Phim--"<<endl;
	for (int i=0; i<n; i++) {
		cout<<"Bo phim thu: "<<i+1<<endl;
		xuat(a[i]);
	}
}
void xuat (Phim ph) {
	cout<<"Ten phim: "<<ph.tenPhim<<endl;
	cout<<"The loai: "<<ph.theLoai<<endl;
	cout<<"Ten dao dien: "<<ph.tenPhim<<endl;
	cout<<"Ten dien vien nam chinh: "<<ph.tenNamChinh<<endl;
	cout<<"Ten dien vien nu chinh: "<<ph.tenNuChinh<<endl;
	cout<<"Nam san xuat: "<<ph.namSX<<endl;
	cout<<"Hang san xuat: "<<ph.hangSX<<endl;
}
void nhapPhim (Phim a[], int &n) {
	cin>>n;
	for (int i=0; i<n; i++) {
		cout<<"Bo phim thu: "<<i+1<<endl;
		nhap(a[i]);
	}
}
void nhap(Phim &x) {
	cout<<"Nhap ten phim: ";
	fflush(stdin);
	gets(x.tenPhim);
	cout<<"Nhap the loai phim: ";
	fflush(stdin);
	gets(x.theLoai);
	cout<<"Nhap ten dao dien: ";
	fflush(stdin);
	gets(x.tenDaoDien);
	cout<<"Nhap ten dien vien nam chinh: ";
	fflush(stdin);
	gets(x.tenNamChinh);
	cout<<"Nhap ten dien vien nu chinh: ";
	fflush(stdin);
	gets(x.tenNuChinh);
	cout<<"Nhap nam san xuat: ";
	cin>>x.namSX;
	cout<<"Nhap hang san xuat: ";
	fflush(stdin);
	gets(x.hangSX);
}