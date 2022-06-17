#include<iostream>
using namespace std;
struct dauSach {
	char MaSach [10];
	char tenSach [20];
	char tacGia [30];
	int soLuong;
};
void nhap(dauSach& d);
void nhapdauSach(dauSach ds[], int &n);
void xuat (dauSach ds);
void xuatdauSach(dauSach ds[], int n);
void timKiemtheoTenSach (dauSach ds[], int n);
int tongSach(dauSach ds[], int n);
int main() {
	dauSach ds[100];
	int n;
	nhapdauSach(ds,n);
	xuatdauSach(ds,n);
	timKiemtheoTenSach(ds,n);
	cout<<endl;
	cout<<"Tong so sach co trong thu vien: "<<tongSach (ds,n);
}
int tongSach(dauSach ds[], int n) {
	int count=0;
	for (int i=0; i<n; i++) {
		count+=ds[i].soLuong;
	}
	return count;
}
void timKiemtheoTenSach (dauSach ds[], int n) {
	int d=0;
	char s[20];
	cout<<"Nhap ten sach can tim kiem: ";
	fflush(stdin);
	gets(s);
	for (int i=0; i<n; i++) {
		if(strcmp(ds[i].tenSach,s)==0) {
			d=1;
			xuat(ds[i]);
		}
	}
	if (d==0) {
		cout<<"Khong tim thay "<<endl;
	}
}
void xuatdauSach(dauSach ds[], int n) {
	cout<<"--Danh sach dau sach--"<<endl;
	for (int i=0; i<n; i++) {
		cout<<"Dau sach thu: "<<i+1<<endl;
		xuat(ds[i]);
	}
}
void xuat (dauSach ds) {
	cout<<"Ma sach: "<<ds.MaSach<<endl;
	cout<<"Ten sach: "<<ds.tenSach<<endl;
	cout<<"Tac gia: "<<ds.tacGia<<endl;
	cout<<"So luong: "<<ds.soLuong<<endl;
}
void nhapdauSach(dauSach ds[], int &n) {
	cin>>n;
	for (int i=0; i<n; i++) {
		cout<<"Dau sach thu: "<<i+1<<endl;
		nhap(ds[i]);
	}
}
void nhap(dauSach& d) {

	cout<<"Nhap ma sach: ";
	fflush(stdin);
	gets(d.MaSach);
	cout<<"Nhap ten sach: ";
	fflush(stdin);
	gets(d.tenSach);
	cout<<"Nhap ten tac gia sach: ";
	fflush(stdin);
	gets(d.tacGia);
	cout<<"Nhap so luong sach co trong dau sach: ";
	cin>>d.soLuong;
}