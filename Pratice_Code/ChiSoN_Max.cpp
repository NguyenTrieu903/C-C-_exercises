#include<iostream>
using namespace std;
int DeQuy (int n);
int Tim(int n);
int main() {
	int n ;
	cin>>n;
	cout<<DeQuy(n)<<endl;
	cout<<Tim(n);
}
int Tim(int n) {
	int i=0;
	while(true) {
		if (DeQuy(i)<n) {
			i++;
			cout<<i;
			break;
		}
	}
}
int DeQuy (int n) {
	if(n==0)
		return 2;
	else if (n==1)
		return 4;
	else if (n==2)
		return 6;
	else
		return  (2*DeQuy(n-3)+4*DeQuy(n-2)+6*DeQuy(n-1));
}