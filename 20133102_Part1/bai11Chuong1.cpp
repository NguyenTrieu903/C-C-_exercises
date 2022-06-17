#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
struct SV {
	char MSSV [10];
	char hoten [30];
	int namsinh;
	float dToan,dLy,dHoa,dTB;
};
void nhapSV (SV &x);
void xuatSV(SV x);
void nhapDanhsach (SV a[], int &n);
void xuatDanhsach(SV a[], int n);
void diemTB (SV a[], int n);
SV tbMax (SV a[], int n);
void hoanDoi (SV&x, SV&y);
void tangDandTB(SV a[], int n);
void giamDanToan(SV a[], int n);
bool KiemTra (SV x);
void dTBHon5 (SV a[], int n);
SV tuoiMax (SV a[], int n);
void timSVtheoTen (SV a[], int n, char s[]);
int main() {
	SV x;
	SV a[40];
	char s[40];
	int n;
	nhapDanhsach(a,n);
	diemTB(a,n);
	xuatDanhsach(a,n);
	cout<<"--Sinh vien co diem trung binh max--"<<endl;
	xuatSV(tbMax(a,n));
	cout<<"--Tang dan theo diem trung binh --"<<endl;
	tangDandTB(a,n);
	xuatDanhsach(a,n);
	cout<<"--Giam dan diem toan --"<<endl;
	giamDanToan(a,n);
	xuatDanhsach(a,n);
	cout<<"--Sinh vien co diem trung binh lon hon 5 va khong co mon nao duoi 3--"<<endl;
	dTBHon5(a,n);
	cout<<"--Sinh vien co tuoi lon nhat--"<<endl;
	xuatSV(tuoiMax(a,n));
	cout<<"Nhap ten sinh vien can tim ";
	fflush(stdin);
	gets(s);
	timSVtheoTen(a,n,s);
	cout<<endl;
}
void timSVtheoTen (SV a[], int n, char s[]) {
	for (int i=0; i<n; i++) {
		if(strcmp(a[i].hoten,s)==0) {
			xuatSV(a[i]);
		}
	}
}
SV tuoiMax (SV a[], int n) {
	int tuoi = 2022-a[0].namsinh;
	int vitri;
	int tmp=0;
	for (int i=0; i<n; i++) {
		tmp = 2022-a[i].namsinh;
		if(tmp>tuoi) {
			tuoi=tmp;
			vitri=i;
		}
	}
	return a[vitri];
}
bool KiemTra (SV x) {
	if (x.dHoa>3 && x.dToan>3 &&x.dHoa>3)
		return true;
	return false;
}
void dTBHon5 (SV a[], int n) {
	for (int i=0; i<n; i++) {
		if (a[i].dTB>5 && KiemTra(a[i])) {
			xuatSV(a[i]);
		}
	}
}
void giamDanToan(SV a[], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (a[i].dToan<a[j].dToan)
				hoanDoi(a[i],a[j]);
		}
	}
}
void hoanDoi (SV&x, SV&y) {
	SV tmp =x;
	x=y;
	y=tmp;
}
void tangDandTB(SV a[], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (a[i].dTB>a[j].dTB)
				hoanDoi(a[i],a[j]);
		}
	}
}
SV tbMax (SV a[], int n) {
	float max =a[0].dTB;
	int vitri=0;
	for (int i=0; i<n; i++) {
		if(a[i].dTB>max) {
			max=a[i].dTB;
			vitri=i;
		}
	}
	return a[vitri];
}
void diemTB (SV a[], int n) {
	for (int i=0; i<n; i++) {
		a[i].dTB=(a[i].dToan+a[i].dLy+a[i].dHoa)/3;
	}
}
void nhapDanhsach (SV a[], int &n) {
	cin>>n;
	for (int i=0; i<n; i++) {
		cout<<"Sinh vien thu "<<i+1<<endl;
		nhapSV(a[i]);
	}
}
void xuatDanhsach(SV a[], int n) {
	cout<<"--Danh sach sinh vien--"<<endl;
	for(int i=0; i<n; i++) {
		cout<<"Sinh vien thu : "<<i+1<<endl;
		xuatSV(a[i]);
	}
}
void nhapSV (SV &x) {
	cout<<"Nhap MSSV : ";
	fflush(stdin);
	gets(x.MSSV);
	cout<<"Nhap ho ten : ";
	fflush(stdin);
	gets(x.hoten);
	cout<<"Nhap nam sinh : ";
	cin>>x.namsinh;
	cout<<"Nhap diem toan ly hoa : ";
	float t,l,h;
	cin>>t>>l>>h;
	x.dToan=t;
	x.dLy=l;
	x.dHoa=h;
}
void xuatSV(SV x) {
	cout<<"MSSV: "<<x.MSSV<<endl;
	cout<<"Ho ten: "<<x.hoten<<endl;
	cout<<"Nam Sinh: "<<x.namsinh<<endl;
	cout<<"Diem trung binh: "<<x.dTB<<endl;
}