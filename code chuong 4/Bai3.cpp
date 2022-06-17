#include<iostream>
using namespace std;
int giaiThua (int n);
int main() {
	int n;
	cin>>n;
	cout<<giaiThua(n);
}
int giaiThua (int n) {
	int GT=1;
	for (int i=n; i>=1; i--) {
		GT*=i;
	}
	return GT;
}