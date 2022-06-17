#include<iostream>
using namespace std;
struct matHang {
	char maHang [20];
	char tenHang [30];
	int soLuong;
	double donGia;
	int soLuongton;
	int thoigianBaoHanh;
};
void nhap(matHang &mh);
void nhapmatHang(matHang mh[], int &n);
void xuat (matHang mh);
void xuatmatHang(matHang mh[], int n);
matHang soLuongtonMax (matHang mh[], int n);
matHang soLuongtonMin (matHang mh[], int n);
void tgBHlonHon12 (matHang mh[], int n);
void swap(matHang &mh1, matHang &mh2);
void sapXeptangDanSLTon (matHang mh[], int n);
int main() {
	matHang mh[100];
	int n;
	nhapmatHang(mh,n);
	xuatmatHang(mh,n);
	cout<<"--Mat hang co so luong ton nhieu nhat--"<<endl;
	xuat(soLuongtonMax(mh,n));
	cout<<"--Mat hang co so luong ton it nhat--"<<endl;
	xuat(soLuongtonMin(mh,n));
	cout<<"--Danh sach hang hoa co thoi gian bao hanh lon hon 12 thang--"<<endl;
	tgBHlonHon12(mh,n);
	cout<<"--Danh sach mat hang tang dan theo so luong ton--"<<endl;
	sapXeptangDanSLTon(mh,n);
	xuatmatHang(mh,n);
}
void sapXeptangDanSLTon (matHang mh[], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (mh[i].soLuongton>mh[j].soLuongton) {
				swap(mh[i],mh[j]);
			}
		}
	}
}
void swap(matHang &mh1, matHang &mh2) {
	matHang tmp = mh1;
	mh1=mh2;
	mh2=tmp;
}
void tgBHlonHon12 (matHang mh[], int n) {
	for (int i=0; i<n; i++) {
		if (mh[i].thoigianBaoHanh>12) {
			xuat(mh[i]);
		}
	}
}
matHang soLuongtonMin (matHang mh[], int n) {
	matHang MH;
	int minTon=0;
	for (int i=0; i<n; i++) {
		if ((mh[i].soLuongton<minTon) || minTon==0) {
			minTon=mh[i].soLuongton;
			MH=mh[i];
		}
	}
	return MH;
}
matHang soLuongtonMax (matHang mh[], int n) {
	matHang MH;
	int maxTon=0;
	for (int i=0; i<n; i++) {
		if (mh[i].soLuongton>=maxTon) {
			maxTon=mh[i].soLuongton;
			MH=mh[i];
		}
	}
	return MH;
}
void xuatmatHang(matHang mh[], int n) {
	cout<<"--Danh sach hang hoa--"<<endl;
	for (int i=0; i<n; i++) {
		cout<<"Mat hang thu: "<<i+1<<endl;
		xuat(mh[i]);
	}
}
void xuat (matHang mh) {
	cout<<"Ma hang: "<<mh.maHang<<endl;
	cout<<"Ten hang: "<<mh.tenHang<<endl;
	cout<<"So luong: "<<mh.soLuong<<endl;
	cout<<"Don gia: "<<mh.donGia<<endl;
	cout<<"So luong ton: "<<mh.soLuongton<<endl;
	cout<<"Thoi gian bao hanh: "<<mh.thoigianBaoHanh<<endl;

}
void nhapmatHang(matHang mh[], int &n) {
	cin>>n;
	for (int i=0; i<n; i++) {
		cout<<"Mat hang thu: "<<i+1<<endl;
		nhap(mh[i]);
	}
}
void nhap(matHang &mh) {
	cout<<"Nhap ma hang: ";
	fflush(stdin);
	cin.getline(mh.maHang,20);
	cout<<"Nhap ten hang: ";
	fflush(stdin);
	cin.getline(mh.tenHang,30);
	cout<<"Nhap so luong: ";
	cin>>mh.soLuong;
	cout<<"Nhap don gia: ";
	double dg;
	cin>>dg;
	mh.donGia=dg;
	cout<<"Nhap so luong ton: ";
	cin>>mh.soLuongton;
	cout<<"Nhap thoi gian bao hanh: ";
	cin>>mh.thoigianBaoHanh;
}