#include<iostream>
using namespace std;
int tinh(int n);
int main() {
	int n;
	cin>>n;
	cout<<tinh(n);
}
int tinh(int n) {
	int dem=1;
	int kq=1;
	while(kq%n) {
		kq=(kq*10+1)%n;
		dem++;
	}
	return dem;
}