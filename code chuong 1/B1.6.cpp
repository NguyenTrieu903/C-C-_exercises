#include<iostream>
using namespace std;
struct PhanSo{
	int tuso;
	int mauso;
};
void nhapPS(PhanSo &x);
void xuatPS (PhanSo x);
PhanSo tinhTong (PhanSo x , PhanSo y);
PhanSo tinhHieu (PhanSo x , PhanSo y);
PhanSo Tich(PhanSo x , PhanSo y);
PhanSo Thuong (PhanSo x , PhanSo y);
void QuyDong (PhanSo &x , PhanSo &y);
bool SoSanh (PhanSo x , PhanSo y);
PhanSo rutgon(PhanSo s1);
int main (){
	PhanSo a,b;
	nhapPS(a);
	nhapPS(b);
	bool kq = SoSanh(a,b);
	if(kq==true)
		cout<<"Phan so 1 lon hon phan so 2";
	else 
		cout<<"Phan so 1 be hon phan so 2";
	cout<<endl;
	QuyDong(a,b);
	xuatPS(a);
	xuatPS(b);
	PhanSo kqTong = tinhTong(a,b);
	PhanSo kqHieu = tinhHieu(a,b);
	PhanSo kqTich=Tich(a,b);
	PhanSo kqThuong = Thuong(a,b);
	xuatPS(kqTong);
	xuatPS(kqHieu);
	xuatPS(kqTich);
	xuatPS(kqThuong);
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
PhanSo rutgon(PhanSo s1)
{
	int ucln=UCLN(s1.tuso,s1.mauso);
	s1.tuso=s1.tuso/ucln;
	s1.mauso=s1.mauso/ucln;
	return s1;
}
PhanSo tinhTong (PhanSo x , PhanSo y){
	PhanSo Tong ;
	Tong.tuso=x.tuso*y.mauso+x.mauso*y.tuso;
	Tong.mauso=x.mauso*y.mauso;
	Tong=rutgon(Tong);
	return Tong;
}
PhanSo tinhHieu (PhanSo x , PhanSo y){
	PhanSo Hieu ;
	Hieu.tuso=x.tuso*y.mauso-x.mauso*y.tuso;
	Hieu.mauso=x.mauso*y.mauso;
	Hieu=rutgon(Hieu);
	return Hieu;
}
PhanSo Tich(PhanSo x , PhanSo y){
	PhanSo tich;
	tich.tuso=x.tuso*y.tuso;
	tich.mauso=x.mauso*y.mauso;
	tich=rutgon(tich);
	return tich;
}
PhanSo Thuong (PhanSo x , PhanSo y){
	PhanSo thuong;
	thuong.tuso=x.tuso*y.mauso;
	thuong.mauso=x.mauso*y.tuso;
	thuong=rutgon(thuong);
	return thuong;
}
void QuyDong (PhanSo &x , PhanSo &y){
	int MSC = x.mauso*y.mauso;
	x.tuso=x.tuso*(MSC/x.mauso);
	x.mauso=MSC;
	y.tuso=y.tuso*(MSC/y.mauso);
	y.mauso=MSC;
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