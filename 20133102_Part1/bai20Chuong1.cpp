#include<iostream>
#include<fstream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void ghiFile();
void xuat(int a[], int n);
void docFile(int a[], int &n);
int main() {
	int a[100],n;
	ghiFile();
	docFile(a,n);
	xuat(a,n);
}
void xuat(int a[], int n) {
	for (int i=0; i<n; i++) {
		cout<<a[i]<<" ";
		if ((i+1)%30==0) {
			cout<<endl;
		}
	}
}
void docFile(int a[], int &n) {
	fstream input("SOCHAN.DAT", ios::in);
	if (!input) {
		cout<<"Khong mo duoc file";
		exit(0);
	}
	n=0;
	while (true) {
		int x;
		input>>x;
		if(input.eof()) {
			break;
		}
		a[n]=x;
		n++;
	}
	input.close();
}
void ghiFile() {
	ofstream output;
	output.open("SOCHAN.DAT",ios::out);
	for (int i=0; i<=100; i++) {
		if (i%2==0)
			output<<i<<" ";
	}
	output.close();
}