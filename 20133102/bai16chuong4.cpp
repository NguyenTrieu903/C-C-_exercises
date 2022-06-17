#include <iostream>
#define SIZE 20
using namespace std;
void xuat();
int a[SIZE], b[SIZE] = {0}, n;
int c[SIZE][SIZE];
int chiPhitoiUu =INT_MAX;
int h[SIZE];
void lietkeHoanVi(int k);
void nhap();
int main() {
	nhap();
//	cin >> n;
	lietkeHoanVi(0);
	xuat();
	cout<<chiPhitoiUu;
	return 0;
}
void tinhChiphi() {
	int chiphi=0;
	for (int i=0; i<n-1; i++) {
		chiphi=chiphi+c[a[i]][a[i+1]];
	}
	chiphi=chiphi+c[a[n-1]][a[0]];
	if(chiphi<chiPhitoiUu) {
		chiPhitoiUu=chiphi;
		for(int j=0; j<n; j++) {
			h[j]=a[j];
		}
	}
}
void lietkeHoanVi(int k) {
	if (k == n) {
		tinhChiphi();
	} else {
		for (int i = 0; i < n; i++) {
			if (b[i] == 0) {
				a[k] = i;
				b[i] = 1;
				lietkeHoanVi(k + 1);
				b[i] = 0;
			}
		}
	}
}
void nhap() {
	cin>>n;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin>>c[i][j];
		}
	}
}
void xuat() {
	for (int i = 0; i < n; i++) {
		cout << h[i] << " ";
	}
	cout << endl;
}