#include<iostream>
using namespace std;
typedef struct PhanSo
{
	int tu;
	int mau;
}PS;
void NhapPhanSo(PS &a)
{
	
	cout<<"Nhap phan so :";
	cin>>a.tu>>a.mau;	
}
void InPhanSo(PS a)
{
	cout<<"\n"<<a.tu<<"/"<<a.mau;
}
void NhapMangPhanSo(PS a[],int &n)
{
	cout<<"\nNhap n:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		NhapPhanSo(a[i]);
	}	
}
void XuatMangPhanSo(PS a[100],int &n)
{
	for(int i=0;i<n;i++)
	{
		InPhanSo(a[i]);	
	}
}
PS cong(PS a, PS b)
{
    PS c;
    c.tu = a.tu * b.mau + a.mau * b.tu;
    c.mau = a.mau * b.mau;
    return c;
}
void TinhTong(PS a[100],int &n)
{
	PS tong;
	PS s;
	s.mau=0;s.tu=0;
	for(int i=0;i<n-1;i++)
	{
       tong=cong(a[i],a[i+1]);
       s=cong(s,tong);
    }
    cout<<"\nTong phan so:";
	InPhanSo(s);
}
int main()
{
	PS a[100];
	int n;
	NhapMangPhanSo(a,n);
	XuatMangPhanSo(a,n);
	TinhTong(a,n);
}