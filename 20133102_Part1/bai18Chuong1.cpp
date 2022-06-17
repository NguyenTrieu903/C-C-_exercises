#include<iostream>
#include<fstream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main() {
	fstream output;
	output.open("SONGUYEN.inp",ios::out);
	if (output) {
		int n=10000;
		int b[32768]= {0};
		srand((unsigned)time(NULL));
		int d=0;
		while(d<n) {
			int x = rand()%32768;
			if (b[x]==0) {
				b[x]=1;
				output<<x<<" ";
				d++;
			}

		}
		output.close();
	}
}