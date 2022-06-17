#include<iostream>
using namespace std;
int tinh(int n);
int main() {
	int n;
	cin>>n;
	cout<<tinh(n);
}
int tinh(int n) {
	if (n==0)
		return n;
	if (n==1)
		return n;
	if (n%2==0)
		return tinh(n/2);
	else {
		return tinh(n/2)+tinh((n/2)+1);
	}
}