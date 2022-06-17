#include<iostream>
#include<math.h>
using namespace std;
struct diem{
	int x;
	int y;
};
struct TAMGIAC{
	diem a;
	diem b;
	diem c;
};
void nhap (TAMGIAC &tg);
void xuat (TAMGIAC tg);
float khoangcach (diem a , diem b);
float chuVi (TAMGIAC tg);
float dienTich(TAMGIAC tg);
int main (){
	TAMGIAC tg;
	nhap(tg);
	xuat(tg);
	cout<<chuVi(tg)<<endl;
	cout<<dienTich(tg);
}
float khoangcach (diem a , diem b){
	float KC =0;
	KC = sqrt(pow((a.x-b.x),2)+ pow((a.y-b.y),2));
	return KC;
}
float chuVi (TAMGIAC tg){
	float canhA = khoangcach(tg.a,tg.b);
	float canhB = khoangcach(tg.b,tg.c);
	float canhC = khoangcach(tg.c,tg.a);
	return canhA+canhB+canhC;
}
float dienTich(TAMGIAC tg){
	float nuaChuvi = chuVi(tg)/2.0;
	float dt = nuaChuvi*(nuaChuvi-khoangcach(tg.a,tg.b))*(nuaChuvi-khoangcach(tg.b,tg.c))*(nuaChuvi-khoangcach(tg.c,tg.a));
	return sqrt(dt);
}
void nhap (TAMGIAC &tg){
	cin>>tg.a.x>>tg.a.y;
	cin>>tg.b.x>>tg.b.y;
	cin>>tg.c.x>>tg.c.y;
}
void xuat (TAMGIAC tg){
	cout<<tg.a.x<<" "<<tg.a.y<<endl;
	cout<<tg.b.x<<" "<<tg.b.y<<endl;
	cout<<tg.c.x<<" "<<tg.c.y<<endl;
}