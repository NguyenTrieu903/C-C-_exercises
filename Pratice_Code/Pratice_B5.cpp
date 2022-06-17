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
void chuanhoa(PhanSo &s);
int main (){
	PhanSo s[100];
	int n;
	nhapmang(s,n);
	// xuatmang(s,n);
	// cout<<endl;
	// PhanSo max = maxTrongmang(s,n);
	// xuatPhanso(max);
	// cout<<endl;
	// PhanSo min = minTrongmang(s,n);
	// xuatPhanso(min);
	// cout<<endl;
	PhanSo tong = tongMang(s,n);
	xuatPhanso(tong);
	// cout<<endl;
	// sapXep(s,n);
	// xuatmang(s,n);
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
void xuatmang (PhanSo s[] , int n){
	for (int i=0;i<n;i++)
		xuatPhanso(s[i]);
}
void nhapPhanso(PhanSo &ps){
	cin>>ps.tuso>>ps.mauso;
    chuanhoa(ps);
}
void nhapmang (PhanSo s[] , int &n){
	cin>>n;
	for (int i=0;i<n;i++)
		nhapPhanso(s[i]);
}
void chuanhoa(PhanSo &s){
    if(s.mauso<0){
        s.mauso=-s.mauso;
        s.tuso=-s.tuso;
    }
}
void xuatPhanso (PhanSo ps){
    // if(ps.mauso==1)
    //     cout<<ps.tuso;
    // else 
	    cout<<ps.tuso<<"  "<<ps.mauso<<"  ";
}