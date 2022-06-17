#include<iostream>
using namespace std;
unsigned long long tmp[1000];
void khoiTao();
unsigned long long fiboQHD(int n);
void lietKe(int n);
int main() {
	int n;
	cin>>n;
	khoiTao();
	lietKe(n);
}
void lietKe(int n) {
	for (int i=0; i<n; i++) {
		cout<<fiboQHD(i)<<" ";
	}
}
void khoiTao() {
	for (int i=0; i<1000; i++) {
		tmp[i]=-1;
	}
}
unsigned long long fiboQHD(int n) {
	if (tmp[n]==-1) {
		if (n<=1) {
			tmp[n]=n;
		} else {
			tmp[n]=fiboQHD(n-1)+fiboQHD(n-2);
		}
	}
	return tmp[n];
}