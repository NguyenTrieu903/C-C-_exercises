#include<iostream>
#define SIZE 100
using namespace std;
int a[SIZE],n;
//void subarray(int a[], int n);
void lietKetapCon(int k);
void xuat() ;
int main() {
	cin>>n;
//	for (int i = 0; i < n; i++)
//		cin>>a[i];
//	subarray(a, n);
	lietKetapCon(1);
}
void lietKetapCon(int k) {

	for (int i=0; i<n; i++) {
		a[k]=i;
		xuat();
		lietKetapCon(k+1);
	}

}
void xuat() {
	for (int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
//void subarray(int a[], int n) {
//	int chieudai = 3;
//	int b[100], nb;
//	for (int i = 0; i < n; i++) {
//		for (chieudai = 1; chieudai <= n; chieudai++) {
//			nb = 0;
//			for (int j = i; j < chieudai; j++) {
//				b[nb++] = a[j];
//			}
//			if (nb >= 1) {
//				Output(b, nb);
//				printf("\n");
//			}
//		}
//	}
//}