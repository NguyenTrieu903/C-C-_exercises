#include<iostream>
using namespace std;
struct PhanSo{
	int tuso;
	int mauso;
};
void nhapPS(PhanSo &x);
void xuatPS (PhanSo x);
void nhap(PhanSo a[], int &n);
void xuat(PhanSo a[], int n);
void rutGon(PhanSo &a);
int UCLN(int x , int y);
void rutGonmang(PhanSo a[] , int n);
bool ISAmDuong (PhanSo x);
int phanSoam (PhanSo a[] , int n);
int phanSoduong (PhanSo a[] , int n);
PhanSo duongDautien (PhanSo a[] , int n);
PhanSo phanSomax (PhanSo a[] , int n);
bool SoSanh (PhanSo x , PhanSo y);
void QuyDong (PhanSo &x , PhanSo &y);
PhanSo phanSomin (PhanSo a[] , int n);
void xepTang (PhanSo a[], int n);
void xepGiam (PhanSo a[], int n);
PhanSo tinhTong (PhanSo x , PhanSo y);
PhanSo tongMang (PhanSo a [], int n);
int main (){
	PhanSo a[100];
	int n;
	nhap(a,n);
//	rutGonmang(a,n);
//	cout<<phanSoam(a,n)<<endl;
//	cout<<phanSoduong(a,n)<<endl;
//	PhanSo kq = duongDautien(a,n);
//	PhanSo kq = phanSomin(a,n);
//	xepTang(a,n);
//	xuatPS(kq);
	PhanSo tong = tongMang(a,n);
	xuatPS(tong);
	xuat(a,n);
}
PhanSo tongMang (PhanSo a [], int n){
	PhanSo kq =a[0];
	for (int i=1;i<n;i++){
		kq=tinhTong(kq,a[i]);
	}
	return kq;
}
PhanSo tinhHieu (PhanSo x , PhanSo y){
	PhanSo Hieu ;
	Hieu.tuso=x.tuso*y.mauso-x.mauso*y.tuso;
	Hieu.mauso=x.mauso*y.mauso;
	rutGon(Hieu);
	return Hieu;
}
PhanSo tinhTong (PhanSo x , PhanSo y){
	PhanSo Tong ;
	Tong.tuso=x.tuso*y.mauso+x.mauso*y.tuso;
	Tong.mauso=x.mauso*y.mauso;
//	rutGon(Tong);
	return Tong;
}
void xepGiam (PhanSo a[], int n){
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if(!SoSanh(a[i],a[j])){
				PhanSo temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void xepTang (PhanSo a[], int n){
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if(SoSanh(a[i],a[j])){
				PhanSo temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
PhanSo phanSomax (PhanSo a[] , int n){
	PhanSo kq=a[0];
	for (int i=0;i<n;i++){
		if(SoSanh(a[i],kq))
			kq=a[i];
	}
	return kq;
}
PhanSo phanSomin (PhanSo a[] , int n){
	PhanSo kq=a[0];
	for (int i=0;i<n;i++){
		if(!SoSanh(a[i],kq))
			kq=a[i];
	}
	return kq;
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
PhanSo duongDautien (PhanSo a[] , int n){
	for (int i=0;i<n;i++){
		if(!ISAmDuong(a[i]))
			return a[i];
	}
}
int phanSoam (PhanSo a[] , int n){
	int d=0;
	for (int i=0;i<n;i++){
		if(ISAmDuong(a[i]))
			d++;
	}
	return d;
}
int phanSoduong (PhanSo a[] , int n){
	int d=0;
	for (int i=0;i<n;i++){
		if(!ISAmDuong(a[i]))
			d++;
	}
	return d;
}
bool ISAmDuong (PhanSo x){
	if(x.tuso<0 || x.mauso<0)
		return true;
	return false;
}
void rutGonmang(PhanSo a[] , int n){
	for (int i=0;i<n;i++){
		rutGon(a[i]);
	}
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
void nhap(PhanSo a[], int &n){
	cout<<"Hello";
	cin>>n;
	for (int i=0;i<n;i++)
		nhapPS(a[i]);
}
void xuat(PhanSo a[], int n){
	for (int i=0;i<n;i++){
		xuatPS(a[i]);
	}
}
void nhapPS(PhanSo &x){
	cin>>x.tuso;
	cin>>x.mauso;
}
void xuatPS (PhanSo x){
	cout<<x.tuso<<"/"<<x.mauso<<endl;
}