#include<iostream>
#include<fstream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void taoFile();
void docFile(int a[], int &n);
void ghiFileChan(int a[], int n);
void ghiFileLe(int a[], int n);
int main() {
	int a[100],n;
	taoFile();
	docFile(a,n);
	ghiFileChan(a,n);
	ghiFileLe(a,n);
}
void ghiFileLe(int a[], int n) {
	ofstream output;
	output.open("SOLE.out",ios::out);
	for (int i=0; i<n; i++) {
		if (a[i]%2!=0)
			output<<a[i]<<" ";
	}
	output.close();
}
void ghiFileChan(int a[], int n) {
	ofstream output;
	output.open("SOCHAN.out",ios::out);
	for (int i=0; i<n; i++) {
		if (a[i]%2==0)
			output<<a[i]<<" ";
	}
	output.close();
}
void docFile(int a[], int &n) {
	fstream input("SONGUYEN.inp", ios::in);
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
void taoFile() {
	fstream output;
	output.open("SONGUYEN.inp",ios::out);
	if (output) {
		int x=0;
		srand((unsigned)time(NULL));
		for (int i=0; i<50; i++) {
			x=rand()%100;
			output<<x<<" ";
		}
		output.close();
	}
}