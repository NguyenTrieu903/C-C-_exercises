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
int Songay(NGAY ng);
int soThutuNgay(NGAY ng);
NGAY truocDo (NGAY &ng , int k);
NGAY sauDo (NGAY &ng , int k);
int khoangCach(NGAY ng);
int main (){
	NGAY ng1, ng2;
	nhap(ng1);
//	nhap(ng2);
//	cout<<leap_year(ng.nam)<<endl;
	cout<<Songay(ng1)<<endl;
//	cout<<soThutuNgay(ng);
//	truocDo(ng,2);
//	sauDo(ng,2);
//	xuat(ng);
//	int kc1 = khoangCach(ng1);
//	int kc2 = khoangCach(ng2);
//	int kc = abs(kc1-kc2);
//	cout<<kc;
//	xuat(ng);
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
int soThutuNgay(NGAY ng){
	int day=0;
	if(ng.nam==1){
		return Songay(ng);
	}else {
		for (int i=1;i<ng.nam;i++){
		if(leap_year(i)){
			day+=366;
		}else 
			day+=365;
		}
		return day+Songay(ng);
	}
}
int Songay(NGAY ng){
	int day=0;
	int temp = Songaytrongthang(ng.thang,ng.nam)-ng.ngay;
	for (int i=1;i<=ng.thang;i++){
		day+=Songaytrongthang(i,ng.nam);
	}
	day=day-temp;
	return day;
}
NGAY truocDo (NGAY &ng , int k){
	for (int i=0;i<k;i++){
		ng.ngay--;
		if(ng.ngay<=0){
			ng.thang--;
		if(ng.thang<1){
			ng.thang=12;
			ng.nam--;
		}
			ng.ngay=Songaytrongthang(ng.thang,ng.nam);
	   }
	}
}
NGAY sauDo (NGAY &ng , int k){
	for (int i=0;i<k;i++){
		if(ng.ngay<Songaytrongthang(ng.thang,ng.nam)){
			ng.ngay++;
		}else {
			ng.ngay=1;
			if(ng.thang==12){
				ng.ngay=1;
				ng.nam++;
			}else 
				ng.thang++;
		}
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
	cout<<ng.ngay<<" "<<ng.thang<<" "<<ng.nam;
}