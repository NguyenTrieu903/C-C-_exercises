#include<iostream>
using namespace std;
int a[13] = {31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
void nhap (int &d , int &m ,int &y);
void xuat (int d, int m , int y);
bool LeapYear(int y);
bool kiemTra(int d, int m, int y);
void ngayTieptheo(int &d, int &m, int &y);
int main (){
	int d,m,y;
	nhap(d,m,y);
	if (kiemTra(d,m,y)){
		ngayTieptheo(d,m,y);
		xuat(d,m,y);
	}
	else 
		cout<<"Khong hop le";
}
void nhap (int &d , int &m ,int &y){
	cin>>d>>m>>y;
}
void xuat (int d, int m , int y){
	cout<<d<<" "<<m<<" "<<y;
}
bool LeapYear(int y)
{
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        return 1;
    return 0;
}
bool kiemTra(int d, int m, int y)
{
    if (y > 0 && LeapYear(y) == true)
        a[2]++;
    if (y <= 0 || m < 1 || m > 12 || d < 1 || d > a[m])
        return false;
    else
        return true;
}
void ngayTieptheo(int &d, int &m, int &y)
{
    if (d < a[m])
        d++;
    else
    {
        d = 1;
        if (m == 12)
        {
            m = 1;
            y++;
        }
        else
            m++;
    }
}