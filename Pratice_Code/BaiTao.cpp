#include<stdio.h>
void nhap(int &n);
int fibonacci(int n);
void xuat(int kq);
int Tinh(int n);
int main() {
	int n;
	nhap(n);
//	int kq = fibonacci(n);
//	xuat(kq);
	int kq1=Tinh(n);
	xuat(kq1);
}
void nhap(int &n) {
	scanf("%d",&n);
}
int Tinh(int n) {
	if (n==5)
		return 2;
	int i=2;
	int tong=0;
	while(true) {
		tong+=fibonacci(i);
		if (tong>n) {
			return i;
		}
		i++;
	}

}
int fibonacci(int n) {
	if(n == 0)
		return 1;
	if(n == 1)
		return 2;
	if(n == 2)
		return 3;
	return fibonacci(n-3)+2*fibonacci(n-2)+3*fibonacci(n-1);
//	int i=3;
//	int f0=1;
//	int f1=2;
//	int f2=3;
//	int fn;
//	while(i<=n) {
//		fn=f0+2*f1+3*f2;
//		f0=f1;
//		f1=f2;
//		f2=fn;
//		i++;
//	}
//	return fn;
}
void xuat(int kq) {
	printf("%d",kq);
}