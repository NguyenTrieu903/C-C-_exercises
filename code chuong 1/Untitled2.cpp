#include<iostream>
using namespace std;
struct DATE{
	int ngay;
	int thang;
	int nam;
};
struct HOCSINH{
	char MSHS [6];
	char hoten[31];
	DATE ngaysinh;
	char diachi [51];
	char phai [4];
	float diemtb;
};
void nhapHS (HOCSINH &x);
void xuatHS(HOCSINH x);
int main (){
	HOCSINH x ;
	nhapHS(x);
	xuatHS(x);
}
void nhapHS (HOCSINH &x){
	cout<<"Nhap ho ten : ";
	fflush(stdin);
	gets(x.hoten);
	cout<<"Nhap MSSV";
	gets(x.MSHS);
	cout<<"Nhap ngay sinh ";
	cin>>x.ngaysinh.ngay>>x.ngaysinh.thang>>x.ngaysinh.nam;
	cout<<"Nhap dia chi ";
	gets(x.diachi);
	cout<<"Nhap gioi tinh ";
	gets(x.phai);
	cout<<"Nhap diem trung binh ";
	float diem;
	cin>>diem;
	x.diemtb=diem;
}
void xuatHS(HOCSINH x){
	cout<<"%s			%s			%d%d%d			%s			%s			%.2f\n"<<x.hoten<<x.MSHS<<x.ngaysinh.ngay<<x.ngaysinh.thang<<x.ngaysinh.nam<<x.diachi<<x.phai<<x.diemtb;
}