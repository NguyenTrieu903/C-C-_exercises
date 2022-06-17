#include<iostream>
using namespace std;
struct DATE {
	int ngay;
	int thang;
	int nam;
};
struct HOCSINH {
	char MSHS [6];
	char hoten[31];
	DATE ngaysinh;
	char diachi [51];
	char phai [4];
	float diemtb;
};
void nhapHS (HOCSINH &x);
void xuatHS(HOCSINH x);
void nhapDanhsach (HOCSINH a[], int &n);
void xuatDanhsach(HOCSINH a[], int n);
int lenLop (HOCSINH a[], int n);
int main () {
	HOCSINH a[40];
	int n;
	nhapDanhsach(a,n);
	xuatDanhsach(a,n);
	cout<<"So hoc sinh len lop : "<<lenLop(a,n)<<endl;
}
int lenLop (HOCSINH a[], int n) {
	int d=0;
	for (int i=1; i<=n; i++) {
		if(a[i].diemtb>=5.0)
			d++;
	}
	return d;
}
void nhapDanhsach (HOCSINH a[], int &n) {
	cin>>n;
	for (int i=1; i<=n; i++) {
		cout<<"Sinh vien thu "<<i<<endl;
		nhapHS(a[i]);
		cout<<endl;
	}
}
void xuatDanhsach(HOCSINH a[], int n) {
	cout<<"Danh sach hoc sinh"<<endl;
	for (int i=1; i<=n; i++) {
		xuatHS(a[i]);
	}
}
void nhapHS (HOCSINH &x) {
	fflush(stdin);
	cout<<"Nhap ho ten : ";
	fflush(stdin);
	gets(x.hoten);
	cout<<"Nhap MSSV : ";
	fflush(stdin);
	gets(x.MSHS);
	cout<<"Nhap ngay sinh : ";
	cin>>x.ngaysinh.ngay>>x.ngaysinh.thang>>x.ngaysinh.nam;
	cout<<"Nhap dia chi : ";
	fflush(stdin);
	gets(x.diachi);
	cout<<"Nhap gioi tinh : ";
	fflush(stdin);
	gets(x.phai);
	cout<<"Nhap diem trung binh : ";
	float diem;
	cin>>diem;
	x.diemtb=diem;
}
void xuatHS(HOCSINH x) {
	cout<<"Ho Ten : "<<x.hoten;
	cout<<"MSSV : "<<x.MSHS<<endl;
	cout<<"Ngay sinh : "<<x.ngaysinh.ngay<<"/"<<x.ngaysinh.thang<<"/"<<x.ngaysinh.nam<<endl;
	cout<<"Dia chi : "<<x.diachi<<endl;
	cout<<"Phai : "<<x.phai<<endl;
	cout<<"Diemtb : "<<x.diemtb<<endl;
	cout<<endl;
}