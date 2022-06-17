#include<iostream>
using namespace std;
struct Gio{
	int h;
	int m;
	int s;
};
void nhap (Gio &g);
void xuat (Gio g);
Gio khoangCach (Gio g1 , Gio g2);
int main (){
	Gio g;
	Gio g1;
	nhap(g);
	nhap(g1);
	Gio g2 = khoangCach(g,g1);
	xuat(g2);
}
Gio khoangCach (Gio g1 , Gio g2){
	Gio g3;
	int s = g1.h*3600+g1.m*60+g1.s;
	int s1=g2.h*3600+g2.m*60+g2.s;
	int s3=abs(s-s1);
	g3.h=s3/3600;
	g3.m=s3%3600/60;
	g3.s=s3%3600%60;
	return g3;
}
void nhap (Gio &g){
	cin>>g.h>>g.m>>g.s;
}
void xuat (Gio g){
	cout<<g.h<<" "<<g.m<<" "<<g.s;
}