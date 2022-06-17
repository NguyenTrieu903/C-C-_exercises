#include <iostream>
#define SIZE 20
using namespace std;
int P[SIZE], n;
int A[SIZE], B[SIZE], Phuongan[SIZE];
int thoiGiantoiuu=INT_MAX;
void lietkeNP(int k);
void xuat();
void tinhchiphi();
void nhap();
int main() {
//	cin >> n;
	nhap();
	lietkeNP(0);
	xuat();
}
void nhap() {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>A[i];
	}
	for (int i=0; i<n; i++) {
		cin>>B[i];
	}
}
void tinhchiphi() {
	int tA=0;
	int tB=0;
	for (int i=0; i<n; i++) {
		if (P[i]==0)
			tA=tA+A[i];
		else
			tB+=B[i];
	}
	int thoiGian=tA;
	if(tA<tB)
		thoiGian=tB;
	if (thoiGian<thoiGiantoiuu) {
		thoiGiantoiuu=thoiGian;
		for (int i=0; i<n; i++) {
			Phuongan[i]=P[i];
		}
	}
}
void lietkeNP(int k) {
	if (k == n) {
		tinhchiphi();
	} else {
		for (int i = 0; i <= 1; i++) {
			P[k] = i;
			lietkeNP(k + 1);
		}
	}
}
void xuat() {
	for (int i = 0; i < n; i++) {
		if(Phuongan[i]==0){
			cout<<A[i]<<" ";
		}else {
			cout<<B[i]<<" ";
		}
	}
	cout << endl;
}