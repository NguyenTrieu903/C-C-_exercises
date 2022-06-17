#include<iostream>
#include<math.h>
#define pi 3.14
using namespace std;
struct hinhTru{
	float BanKinh;
	float ChieuCao;
};
void nhap (hinhTru &td);
void xuat(hinhTru td);
float dienTichxQ(hinhTru td);
float dienTichtP(hinhTru td);
float theTichHT(hinhTru td);
int main (){
	hinhTru td;
	nhap(td);
	xuat(td);
	cout<<dienTichxQ(td)<<endl;
	cout<<dienTichtP(td)<<endl;
	cout<<theTichHT(td);
}
float theTichHT(hinhTru td){
	return pi*td.BanKinh*td.BanKinh*td.ChieuCao;
}
float dienTichxQ(hinhTru td){
	return 2*pi*td.BanKinh*td.ChieuCao;
}
float dienTichtP(hinhTru td){
	return 2*pi*td.BanKinh*(td.BanKinh+td.ChieuCao);
}
void nhap (hinhTru &td){
	float a,b;
	cin>>a>>b;
	td.BanKinh=a;
	td.ChieuCao=b;
}
void xuat(hinhTru td){
	cout<<td.BanKinh<<" "<<td.ChieuCao<<endl;
}