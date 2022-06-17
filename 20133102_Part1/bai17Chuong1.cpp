#include<iostream>
#include<fstream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void taoFile();
void docFile(int a[], int &n);
void sapxepTangdan (int a[], int n);
void xuatmang (int a[], int n);
void ghiFile(int a[], int n);
int main() {
	int a[100],n;
	taoFile();
	docFile(a,n);
	sapxepTangdan(a,n);
	ghiFile(a,n);
}
void ghiFile(int a[], int n) {
	int d=0;
	ofstream output;
	output.open("SONGUYEN.out",ios::out);
	for (int i=0; i<n; i++) {
		output<<a[i]<<" ";
		if ((i+1)%10==0) {
			output<<endl;
		}
	}
	output.close();
}
void xuatmang (int a[], int n) {
	for (int i=0; i<n; i++) {
		cout<<a[i]<< " ";
	}
}
void sapxepTangdan (int a[], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i; j<n; j++) {
			if (a[i]>a[j]) {
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
void taoFile() {
	fstream output;
	output.open("SONGUYEN.inp",ios::out|ios::binary);
	if (output) {
		int a[10];
		int n=1000;
		srand((unsigned)time(NULL));
		for (int i=1; i<=n; i++) {
			for (int j=0; j<10; j++) {
				a[j]=rand()%100;
			}
			output.write(reinterpret_cast<char *>(&a),sizeof(a));
			output.write("\n",1);
			cout<<endl;
		}
		output.close();
	}
}
void docFile(int a[], int &n) {
	fstream input("SONGUYEN.inp", ios::in|ios::binary);
	if (!input) {
		cout<<"Khong mo duoc file";
		exit(0);
	}
	n=0;
	while(true) {
		int b[10];
		input.read(reinterpret_cast<char *>(&b),sizeof(b));
		char c;
		input.read(reinterpret_cast<char *>(&c),sizeof(c));
		if (input.eof()) {
			break;
		}
		for (int i=0; i<10; i++) {
			a[n]=b[i];
			n++;
		}
	}
}