#include<iostream>
using namespace std;
struct PhanSo{
	int tuso;
	int mauso;
};
void nhapPS(PhanSo &x);
void xuatPS (PhanSo x);
PhanSo tinhTong (PhanSo x , PhanSo y);
void rutGon(PhanSo &a);
PhanSo tinhHieu (PhanSo x , PhanSo y);
PhanSo Tich(PhanSo x , PhanSo y);
PhanSo Thuong (PhanSo x , PhanSo y);
bool IsToiGian (PhanSo x);
void QuyDong (PhanSo &x , PhanSo &y);
bool ISAmDuong (PhanSo x);
bool SoSanh (PhanSo x , PhanSo y);
int main (){
	PhanSo a,b;
	nhapPS(a);
	nhapPS(b);
	bool kq = SoSanh(a,b);
	if(kq==true)
		cout<<"Phan so 1 lon hon phan so 2";
	else 
		cout<<"Phan so 1 be hon phan so 2";
//	bool kq = ISAmDuong(a);
//	cout<<kq;
//	nhapPS(b);
//	QuyDong(a,b);
//	xuatPS(a);
//	xuatPS(b);
//	bool kq = IsToiGian(a);
//	cout<<kq;
//	PhanSo kqTong = tinhTong(a,b);
//	PhanSo kqHieu = tinhHieu(a,b);
//	PhanSo kqTich=Tich(a,b);
//	PhanSo kqThuong = Thuong(a,b);
//	xuatPS(kqTong);
//	xuatPS(kqHieu);
//	xuatPS(kqTich);
//	xuatPS(kqThuong);
}
int UCLN(int x , int y){
	if(x<0)
		x=abs(x);
	if(y<0)
		y=abs(y);
	while(x!=y){
		if(x>y)
			x-=y;
		else 
			y-=x;
	}
	return x;
}
void rutGon(PhanSo &a){
	int uc = UCLN(a.tuso,a.mauso);
	a.tuso=a.tuso/uc;
	a.mauso=a.mauso/uc;
}
bool IsToiGian (PhanSo x){
	PhanSo y = x;
	rutGon(x);
	if(y.tuso==x.tuso && y.mauso==x.mauso)
		return true;
	return false;
}
PhanSo tinhTong (PhanSo x , PhanSo y){
	PhanSo Tong ;
	Tong.tuso=x.tuso*y.mauso+x.mauso*y.tuso;
	Tong.mauso=x.mauso*y.mauso;
	rutGon(Tong);
	return Tong;
}
PhanSo tinhHieu (PhanSo x , PhanSo y){
	PhanSo Hieu ;
	Hieu.tuso=x.tuso*y.mauso-x.mauso*y.tuso;
	Hieu.mauso=x.mauso*y.mauso;
	rutGon(Hieu);
	return Hieu;
}
PhanSo Tich(PhanSo x , PhanSo y){
	PhanSo tich;
	tich.tuso=x.tuso*y.tuso;
	tich.mauso=x.mauso*y.mauso;
	rutGon(tich);
	return tich;
}
PhanSo Thuong (PhanSo x , PhanSo y){
	PhanSo thuong;
	thuong.tuso=x.tuso*y.mauso;
	thuong.mauso=x.mauso*y.tuso;
	rutGon(thuong);
	return thuong;
}
void QuyDong (PhanSo &x , PhanSo &y){
	int MSC = x.mauso*y.mauso;
	x.tuso=x.tuso*(MSC/x.mauso);
	x.mauso=MSC;
	y.tuso=y.tuso*(MSC/y.mauso);
	y.mauso=MSC;
}
bool ISAmDuong (PhanSo x){
	if(x.tuso<0)
		return true;
	return false;
}
bool SoSanh (PhanSo x , PhanSo y){
	QuyDong(x,y);
	if(x.tuso>y.tuso)
		return true;
	return false;
}
void nhapPS(PhanSo &x){
	cin>>x.tuso;
	cin>>x.mauso;
}
void xuatPS (PhanSo x){
	cout<<x.tuso<<"/"<<x.mauso<<endl;
}