#include<iostream>
using namespace std;
int giaiThua (int n);
double toHop(int n, int k);
int main() {
	int n,k;
	cin>>n>>k;
	cout<<toHop(n,k);
}
int giaiThua (int n) {
	int GT=1;
	for (int i=n; i>=1; i--) {
		GT*=i;
	}
	return GT;
}
double toHop(int n, int k) {
	return (giaiThua(n)/(giaiThua(k)*giaiThua(n-k)));
}