#include<iostream>
#include<string.h>
using namespace std;
struct mayTinh {
	char loaiMay [20];
	char noiSX [10];
	int tgBaoHanh;
};
void nhap(mayTinh &mt);
void nhapdayMT(mayTinh mt[], int &n);
void xuat(mayTinh mt);
void xuatdayMT(mayTinh mt[], int n);
int thongKeBH1nam (mayTinh mt[], int n);
void lietKemaytuMy (mayTinh mt[], int n);
int main() {
	mayTinh mT [100];
	int n;
	nhapdayMT (mT,n);
	xuatdayMT(mT,n);
	cout<<"--So luong may co thoi gian bao hanh 1 nam: "<<thongKeBH1nam(mT,n)<<endl;
	cout<<"--Danh sach may co xuat xu tu My--"<<endl;
	lietKemaytuMy(mT,n);
}
void lietKemaytuMy (mayTinh mt[], int n) {
	for (int i=0; i<n; i++) {
		if (mt[i].noiSX=="my" || mt[i].noiSX=="My"
		        xuat(mt[i]);
	}
}
int thongKeBH1nam (mayTinh mt[], int n) {
	int count=0;
	for (int i=0; i<n; i++) {
		if (mt[i].tgBaoHanh==1)
			count++;
	}
	return count;
}
void xuatdayMT(mayTinh mt[], int n) {
	cout<<"--Day may tinh--"<<endl;
	for (int i=0; i<n; i++) {
		cout<<"May tinh thu: "<<i+1<<endl;
		xuat(mt[i]);
	}
}
void xuat(mayTinh mt) {
	cout<<"Loai may: "<<mt.loaiMay<<endl;
	cout<<"Noi san xuat: "<<mt.noiSX<<endl;
	cout<<"Thoi gian bao hanh: "<<mt.tgBaoHanh<<endl;
}
void nhapdayMT(mayTinh mt[], int &n) {
	cin>>n;
	for (int i=0; i<n; i++) {
		cout<<"May tinh thu: "<<i+1<<endl;
		nhap(mt[i]);
	}
}
void nhap(mayTinh &mt) {
	cout<<"Nhap loai may: ";
	fflush(stdin);
	gets(mt.loaiMay);
	cout<<"Nhap noi san xuat: ";
	fflush(stdin);
	gets(mt.noiSX);
	cout<<"Nhap thoi gian bao hanh: ";
	cin>>mt.tgBaoHanh;
}