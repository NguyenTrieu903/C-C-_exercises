#include <iostream>
#define SIZE 20
using namespace std;
void lietKeToHop(int n, int k, int B[], int nb);
void gan(int a[], int n, int B[], int &nb);
void xuat(int a[], int n);
int main() {
	int n, k;
	int B[100],nb;
	cin >> n >> k;
	lietKeToHop(n, k,B,nb);
	return 0;
}
void gan(int a[], int n, int B[], int &nb) {
	nb=0;
	for (int i=0; i<n; i++) {
		B[nb++]=a[i];
	}
}
void lietKeToHop(int n, int k, int B[], int nb) {
	int a[SIZE];
	int i;
	for (i = 0; i < k; i++) {
		a[i] = i;
	}
	gan(a,k,B,nb);
	xuat(B,nb);
	i = k - 1;
	do {
		while (a[i] < n - k + i) {
			a[i]++;
			for (int j = i + 1; j < k; j++)
				a[j] = a[j - 1] + 1;
			gan(a,k,B,nb);
			xuat(B,nb);
			i = k - 1;
		}
		i--;
	} while (i >= 0);
}
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}