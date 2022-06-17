#include<iostream>
using namespace std;
struct PhanSo {
	int tuso;
	int mauso;
};
void nhapPhanso(PhanSo &ps);
void xuatmang (PhanSo s[], int n);
void nhapmang (PhanSo s[], int &n);
void xuatPhanso (PhanSo ps);
void QuyDong (PhanSo &x, PhanSo &y);
bool SoSanh (PhanSo x, PhanSo y);
int UCLN(int x, int y);
PhanSo maxTrongmang (PhanSo s[], int n);
PhanSo tinhTong (PhanSo x, PhanSo y);
PhanSo tinhTich(PhanSo x, PhanSo y);
PhanSo tongMang (PhanSo s[], int n);
PhanSo tichMang (PhanSo s[], int n);
PhanSo nghichDao (PhanSo &x);
void nghichDaomang(PhanSo s[], int n);
int main () {
	PhanSo s[50];
	int n;
	nhapmang(s,n);
	cout<<"Mang phan so: "<<endl;
	xuatmang(s,n);
	cout<<"Phan so max: "<<endl;
	PhanSo max = maxTrongmang(s,n);
	xuatPhanso(max);
	PhanSo tong = tongMang(s,n);
	cout<<"Tong mang: "<<endl;
	xuatPhanso(tong);
	cout<<"Tich mang: "<<endl;
	PhanSo tich = tichMang(s,n);
	xuatPhanso(tich);
	cout<<"Mang nghich dao: "<<endl;
	nghichDaomang(s,n);
	xuatmang(s,n);
}
void QuyDong (PhanSo &x, PhanSo &y) {
	int MSC = x.mauso*y.mauso;
	x.tuso=x.tuso*(MSC/x.mauso);
	x.mauso=MSC;
	y.tuso=y.tuso*(MSC/y.mauso);
	y.mauso=MSC;
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
PhanSo tongMang (PhanSo s[], int n) {
	PhanSo tong=s[0];
	for (int i=1; i<n; i++) {
		tong = tinhTong(tong,s[i]);
	}
	return tong;
}
PhanSo tichMang (PhanSo s[], int n) {
	PhanSo tich=s[0];
	for (int i=1; i<n; i++) {
		tich=tinhTich(tich,s[i]);
	}
	return tich;
}
PhanSo nghichDao (PhanSo &x) {
	int a=x.tuso;
	x.tuso=x.mauso;
	x.mauso=a;
}
void nghichDaomang(PhanSo s[], int n) {
	for (int i=0; i<n; i++) {
		nghichDao(s[i]);
	}
}
PhanSo maxTrongmang (PhanSo s[], int n) {
	PhanSo max=s[0];
	for (int i=1; i<n; i++) {
		if (SoSanh(s[i],max)) {
			max=s[i];
		}
	}
	return max;
}
bool SoSanh (PhanSo x, PhanSo y) {
	QuyDong(x,y);
	if(x.tuso>y.tuso)
		return true;
	return false;
}
void xuatmang (PhanSo s[], int n) {
	for (int i=0; i<n; i++)
		xuatPhanso(s[i]);
}
void nhapPhanso(PhanSo &ps) {
	cin>>ps.tuso>>ps.mauso;
}
void nhapmang (PhanSo s[], int &n) {
	cin>>n;
	for (int i=0; i<n; i++)
		nhapPhanso(s[i]);
}
void xuatPhanso (PhanSo ps) {
	cout<<ps.tuso<<" "<<ps.mauso<<" "<<endl;
}