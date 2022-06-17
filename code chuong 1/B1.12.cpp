#include<iostream>
using namespace std;
struct PhanSo{
	int tuso;
	int mauso;
};
void nhapPhanso(PhanSo &ps);
void xuatmang (PhanSo s[] , int n);
void nhapmang (PhanSo s[] , int &n);
void xuatPhanso (PhanSo ps);
void QuyDong (PhanSo &x , PhanSo &y);
bool SoSanh (PhanSo x , PhanSo y);
int UCLN(int x , int y);
PhanSo maxTrongmang (PhanSo s[], int n);
PhanSo tinhTong (PhanSo x , PhanSo y);
PhanSo tongMang (PhanSo s[], int n);
void rutGon(PhanSo &a);
PhanSo minTrongmang (PhanSo s[], int n);
void sapXep (PhanSo s[], int n);
int main (){
	PhanSo s[50];
	int n;
	nhapmang(s,n);
	xuatmang(s,n);
	cout<<endl;
	PhanSo max = maxTrongmang(s,n);
	xuatPhanso(max);
	cout<<endl;
	PhanSo min = minTrongmang(s,n);
	xuatPhanso(min);
	cout<<endl;
	PhanSo tong = tongMang(s,n);
	xuatPhanso(tong);
	cout<<endl;
	sapXep(s,n);
	xuatmang(s,n);
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
PhanSo tinhTong (PhanSo x , PhanSo y){
	PhanSo Tong ;
	Tong.tuso=x.tuso*y.mauso+x.mauso*y.tuso;
	Tong.mauso=x.mauso*y.mauso;
	rutGon(Tong);
	return Tong;
}
PhanSo tongMang (PhanSo s[], int n){
	PhanSo tong=s[0];
	for (int i=1;i<n;i++){
		tong = tinhTong(tong,s[i]);
	}
	return tong;
}
PhanSo maxTrongmang (PhanSo s[], int n){
	PhanSo max=s[0];
	for (int i=1;i<n;i++){
		if (SoSanh(s[i],max)){
			max=s[i];
		}
	}
	return max;
}
PhanSo minTrongmang (PhanSo s[], int n){
	PhanSo min=s[0];
	for (int i=1;i<n;i++){
		if (!SoSanh(s[i],min)){
			min=s[i];
		}
	}
	return min;
}
void sapXep (PhanSo s[], int n){
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (SoSanh(s[i],s[j])){
				PhanSo tmp =s[i];
				s[i]=s[j];
				s[j]=tmp;
			}
		}
	}
}
void xuatmang (PhanSo s[] , int n){
	for (int i=0;i<n;i++)
		xuatPhanso(s[i]);
}
void nhapPhanso(PhanSo &ps){
	cin>>ps.tuso>>ps.mauso;
}
void nhapmang (PhanSo s[] , int &n){
	cin>>n;
	for (int i=0;i<n;i++)
		nhapPhanso(s[i]);
}
void xuatPhanso (PhanSo ps){
	cout<<ps.tuso<<" "<<ps.mauso<<" ";
}