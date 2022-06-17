#include<iostream>
#include<string>
using namespace std;
int tinhDoSau(char S[]);
void lietKeNP(int k);
int tinhDoSau();
void xuat();
int A[100],m,n;
int dem=0;
int main() {
	cin>>m>>n;
	lietKeNP(0);
	cout<<dem;
	return 0;
}
void lietKeNP(int k) {
	if (k==m) {
		if(tinhDoSau()==n){
			xuat();
			dem++;
		}
			
	} else {
		for (int i=0; i<=1; i++) {
			A[k]=i;
			lietKeNP(k+1);
		}
	}
}
void xuat() {
	for (int i=0; i<m; i++){
		if (A[i]==0)
			cout<<'(';
		else 
			cout<<')';
	}
	cout<<endl;
}
int tinhDoSau() {
	int i=0;
	int mongoac=0;
	int doSau=0;
	while(i<m) {
		if (A[i]==0)
			mongoac++;
		else {
			if (mongoac==0)
				return -1;
			if (mongoac>doSau) {
				doSau=mongoac;
			}
			mongoac--;
		}
		i++;
	}
	if (mongoac==0)
		return doSau;
	return -1;
}
