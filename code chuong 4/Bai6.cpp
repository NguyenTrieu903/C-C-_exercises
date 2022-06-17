#include<iostream>
using namespace std;
int phanTuThunFib(int n);
int main() {
	int n;
	cin>>n;
	cout<<phanTuThunFib(n);
}
int phanTuThunFib(int n) {
	int f0=0;
	int f1=1;
	int fn=0;
	for (int i=3; i<=n; i++) {
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	return fn;
}