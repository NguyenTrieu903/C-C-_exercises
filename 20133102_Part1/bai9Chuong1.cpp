#include<iostream>
using namespace std;
struct soPhuc {
	int phanThuc;
	int phanAo;
};
void nhap (soPhuc &a);
void nhapMang (soPhuc sp[], int &n);
void xuat (soPhuc a);
void xuatMang (soPhuc s[], int n);
soPhuc tinhTong (soPhuc a, soPhuc b);
soPhuc tinhTich (soPhuc a, soPhuc b);
soPhuc tongMang (soPhuc sp[], int n);
soPhuc tichMang (soPhuc sp[], int n);
int main () {
	soPhuc sp[100];
	int n;
	nhapMang(sp,n);
	xuatMang(sp,n);
	cout<<endl;
	xuat(tongMang(sp,n));
	cout<<endl;
	xuat(tichMang(sp,n));
}
soPhuc tongMang (soPhuc sp[], int n) {
	soPhuc tong =sp[0];
	for (int i=1; i<n; i++)
		tong=tinhTong(tong,sp[i]);
	return tong;
}
soPhuc tichMang (soPhuc sp[], int n) {
	soPhuc tich =sp[0];
	for (int i=1; i<n; i++)
		tich=tinhTich(tich,sp[i]);
	return tich;
}
soPhuc tinhTong (soPhuc a, soPhuc b) {
	soPhuc t;
	t.phanThuc=a.phanThuc+b.phanThuc;
	t.phanAo=a.phanAo+b.phanAo;
	return t;
}
soPhuc tinhTich (soPhuc a, soPhuc b) {
	soPhuc tch;
	tch.phanThuc=a.phanThuc*b.phanThuc-a.phanAo*b.phanAo;
	tch.phanAo=a.phanThuc*b.phanAo+a.phanAo*b.phanThuc;
	return tch;
}
void nhap (soPhuc &a) {
	cin>>a.phanThuc>>a.phanAo;
}
void nhapMang (soPhuc sp[], int &n) {
	cin>>n;
	for (int i=0; i<n; i++)
		nhap(sp[i]);
}
void xuat (soPhuc a) {
	cout<<a.phanThuc<<" "<<a.phanAo<<" ";
}
void xuatMang (soPhuc sp[], int n) {
	for (int i=0; i<n; i++)
		xuat(sp[i]);
}