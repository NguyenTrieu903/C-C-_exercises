#include<iostream>
#include<math.h>
using namespace std;
struct diem{
	int x ;
	int y;
};
void nhap (diem &a);
void xuat(diem a);
float khoangcach (diem a , diem b);
void DoiXung(diem &a);
void DoiXungOX(diem &a);
void DoiXungOY(diem &a);
int CheckPhanTu (diem a);
int main (){
	diem a,b;
	nhap(a);
	cout<<CheckPhanTu(a);
//	DoiXung(a);
//	nhap(b);
//	DoiXungOX(a);
//	DoiXungOY(a);
//	xuat(a);
//	float kq = khoangcach(a,b);
//	cout<<kq;
}
float khoangcach (diem a , diem b){
	float KC =0;
	KC = sqrt(pow((a.x-b.x),2)+ pow((a.y-b.y),2));
	return KC;
}
void DoiXung(diem &a){
	a.x=a.x*-1;
	a.y=a.y*-1;
}
void DoiXungOX(diem &a){
	a.y=a.y*-1;
}
void DoiXungOY(diem &a){
	a.x=a.x*-1;
}
int CheckPhanTu (diem a){
	if(a.x>0&&a.y>0)
		return 1;
	else if (a.x<0 && a.y>0)
		return 2;
	else if (a.x<0 &&a.y<0)
		return 3;
	else 
		return 4;
}
void nhap (diem &a){
	cin>>a.x>>a.y;
}
void xuat(diem a){
	cout<<a.x<<" "<<a.y;
}