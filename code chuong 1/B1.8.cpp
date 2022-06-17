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
diem DoiXung(diem a);
diem DoiXungOX(diem a);
diem DoiXungOY(diem a);
diem tongDiem(diem a , diem b);
diem hieuDiem(diem a , diem b);
diem tichDiem (diem a, diem b);
int main (){
	diem a,b;
	nhap(a);
	nhap(b);
	xuat(DoiXung(a));
	xuat(DoiXungOX(a));
	xuat(DoiXungOY(a));
	xuat(tongDiem(a,b));
	xuat(hieuDiem(a,b));
	xuat(tichDiem(a,b));
	float kq = khoangcach(a,b);
	cout<<kq;
}
diem tichDiem (diem a, diem b){
	diem kq;
	kq.x=a.x*b.x;
	kq.y=a.y*b.y;
	return kq;
}
diem hieuDiem(diem a , diem b){
	diem kq;
	kq.x=a.x-b.x;
	kq.y=a.y-b.y;
	return kq;
}
diem tongDiem(diem a , diem b){
	diem kq;
	kq.x=a.x+b.x;
	kq.y=a.y+b.y;
	return kq;
}
float khoangcach (diem a , diem b){
	float KC =0;
	KC = sqrt(pow((a.x-b.x),2)+ pow((a.y-b.y),2));
	return KC;
}
diem DoiXung(diem a){
	diem kq ;
	kq.x=a.x*-1;
	kq.y=a.y*-1;
	return kq;
}
diem DoiXungOX(diem a){
	diem kq ;
	kq.x=a.x;
	kq.y=a.y*-1;
	return kq;
}
diem DoiXungOY(diem a){
	diem kq ;
	kq.x=a.x*-1;
	kq.y=a.y;
	return kq;
}
void nhap (diem &a){
	cin>>a.x>>a.y;
}
void xuat(diem a){
	cout<<a.x<<" "<<a.y<<endl;
}