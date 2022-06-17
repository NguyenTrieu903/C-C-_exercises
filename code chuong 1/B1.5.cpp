#include<iostream>
using namespace std;
struct soPhuc{
	int phanThuc;
	int phanAo;
};
void nhap (soPhuc &a);
void xuat (soPhuc a);
soPhuc tong (soPhuc a , soPhuc b);
soPhuc hieu (soPhuc a , soPhuc b);
soPhuc tich (soPhuc a , soPhuc b);
int main (){
	soPhuc a;
	soPhuc b;
	nhap(a);
	nhap(b);
	soPhuc t = tong(a,b);
	xuat(t);
	cout<<endl;
	soPhuc h = hieu(a,b);
	xuat(h);
	
	soPhuc tch = tich(a,b);
	xuat(tch);
}
soPhuc tong (soPhuc a , soPhuc b){
	soPhuc t;
	t.phanThuc=a.phanThuc+b.phanThuc;
	t.phanAo=a.phanAo+b.phanAo;
	return t;
}
soPhuc hieu (soPhuc a , soPhuc b){
	soPhuc h;
	h.phanThuc=a.phanThuc-b.phanThuc;
	h.phanAo=a.phanAo-b.phanAo;
	return h;
}
soPhuc tich (soPhuc a , soPhuc b){
	soPhuc tch;
	tch.phanThuc=a.phanThuc*b.phanThuc-a.phanAo*b.phanAo;
	tch.phanAo=a.phanThuc*b.phanAo+a.phanAo*b.phanThuc;
	return tch;
}
void nhap (soPhuc &a){
	cin>>a.phanThuc>>a.phanAo;
}
void xuat (soPhuc a){
	cout<<a.phanThuc<<" "<<a.phanAo;
}