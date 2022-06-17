#include<iostream>
using namespace std;
struct NGAY {
	int ngay;
	int thang;
	int nam;
};
void nhap (NGAY &ng);
void xuat (NGAY ng);
int leap_year(int nam);
int Songaytrongthang(int m, int y);
int khoangCach(NGAY ng);
int main (){
	NGAY ng1, ng2;
	nhap(ng1);
	nhap(ng2);
	xuat(ng1);
	cout<<endl;
	xuat(ng2);
	cout<<endl;
	int kc1 = khoangCach(ng1);
	int kc2 = khoangCach(ng2);
	int kc = abs(kc1-kc2);
	cout<<kc;
}
int leap_year(int nam){
	if(nam%4!=0)
		return 0;
	else if (nam%100!=0)
		return 1;
	else if(nam%400!=0)
		return 0;
	else 
		return 1;
}
int Songaytrongthang(int m, int y)
{
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
        break;
    case 2:
        if (leap_year(y))
            return 28;
        else
            return 29;
        break;
    default:
        return 30;
        break;
    }
}
int khoangCach(NGAY ng){
	int kq = ng.ngay;
	int i,j;
	for (i=1;i<ng.thang;i++){
		kq+=Songaytrongthang(i,ng.nam);
	}
	for (j=1;j<ng.nam;j++){
		if(leap_year(j))
			kq+=366;
		else 
			kq+=365;
	}
	return kq;
}
void nhap (NGAY &ng){
	cin>>ng.ngay>>ng.thang>>ng.nam;
}
void xuat (NGAY ng){
	cout<<ng.ngay<<" "<<ng.thang<<" "<<ng.nam<<" ";
}