#include<iostream>
#include<math.h>
using namespace std;
struct diem{
	int x ;
	int y;
};
void nhapMang (diem a[], int &n);
void xuatMang (diem a[], int n);
void nhap (diem &a);
void xuat(diem a);
int hoanhDoduong (diem a[], int n);
bool timThay (diem a[], int n , int k);
int khongTrung (diem a[], int n);
diem hoanhDomax (diem a[], int n);
diem hoanhDomin (diem a[], int n);
float khoangcach (diem a , diem b);
diem diemGantoaDo (diem a[], int n);
int main (){
	diem a[100];
	int n;
	nhapMang(a,n);
//	diem kq = hoanhDomax(a,n);
//	cout<<hoanhDoduong(a,n)<<endl;
//	cout<<khongTrung(a,n)<<endl;
	diem kq = diemGantoaDo(a,n);
	xuat(kq);
	xuatMang(a,n);
}
diem diemGantoaDo (diem a[], int n){
	diem o;
	o.x=0;
	o.y=0;
	float kc= khoangcach(a[0],o);
	diem kq=a[0];
	for (int i=0;i<n;i++){
		float min = khoangcach(a[i],o);
		if(min<kc){
			kc=min;
			kq=a[i];
		}
	}
	return kq;
}
float khoangcach (diem a , diem b){
	float KC =0;
	KC = sqrt(pow((a.x-b.x),2)+ pow((a.y-b.y),2));
	return KC;
}
diem hoanhDomin (diem a[], int n){
	diem min = a[0];
	for (int i=0;i<n;i++){
		if(a[i].x<min.x)
			min=a[i];
	}
	return min;
}
diem hoanhDomax (diem a[], int n){
	diem max = a[0];
	for (int i=0;i<n;i++){
		if(a[i].x>max.x)
			max=a[i];
	}
	return max;
}
int khongTrung (diem a[], int n){
	int d=0;
	for (int i=0;i<n;i++){
		if(!timThay(a,n,i))
			d++;
	}
	return d;
}
bool timThay (diem a[], int n , int k){
	for (int i=k+1;i<n;i++){
		if((a[i].x==a[k].x) && (a[i].y==a[k].y))
			return true;
	}
	return false;
}
int hoanhDoduong (diem a[], int n){
	int d=0;
	for (int i=0;i<n;i++){
		if(a[i].x>0)
			d++;
	}
	return d;
}
void nhapMang (diem a[], int &n){
	cin>>n;
	for (int i=0;i<n;i++)
		nhap(a[i]);
}
void xuatMang (diem a[], int n){
	for (int i=0;i<n;i++){
		xuat(a[i]);
	}
}
void nhap (diem &a){
	cin>>a.x>>a.y;
}
void xuat(diem a){
	cout<<a.x<<" "<<a.y<<endl;
}