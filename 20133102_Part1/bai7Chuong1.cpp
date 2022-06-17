#include<iostream>
using namespace std;
struct PhanSo {
	int tuso;
	int mauso;
};
struct honSo {
	int tSo;
	PhanSo ps;
};
void nhap (honSo &s);
PhanSo chuyenDoi (honSo s);
void xuat (PhanSo x );
PhanSo tinhTong (PhanSo x, PhanSo y);
PhanSo tinhTich(PhanSo x, PhanSo y);
int main () {
	honSo s1,s2;
	nhap (s1);
	nhap (s2);
	PhanSo kq1 = chuyenDoi(s1);
	cout<<"Phan so 1: "<<endl;
	xuat(kq1);
	PhanSo kq2 = chuyenDoi(s2);
	cout<<"Phan so 2: "<<endl;
	xuat(kq2);
	cout<<"Phan so tong: "<<endl;
	PhanSo tong = tinhTong(kq1,kq2);
	xuat(tong);
	cout<<"Phan so tich: "<<endl;
	PhanSo tich = tinhTich(kq1,kq2);
	xuat(tich);
}
PhanSo chuyenDoi (honSo s) {
	PhanSo ps1 ;
	ps1.tuso=s.tSo*s.ps.mauso+s.ps.tuso;
	ps1.mauso=s.ps.mauso;
	return ps1;
}
PhanSo tinhTong (PhanSo x, PhanSo y) {
	PhanSo Tong ;
	Tong.tuso=x.tuso*y.mauso+x.mauso*y.tuso;
	Tong.mauso=x.mauso*y.mauso;
	return Tong;
}
PhanSo tinhTich(PhanSo x, PhanSo y) {
	PhanSo tich;
	tich.tuso=x.tuso*y.tuso;
	tich.mauso=x.mauso*y.mauso;
	return tich;
}
void xuat (PhanSo x ) {
	cout<<x.tuso<<" "<<x.mauso<<endl;
}
void nhap (honSo &s) {
	cin>>s.tSo;
	cin>>s.ps.tuso>>s.ps.mauso;
}