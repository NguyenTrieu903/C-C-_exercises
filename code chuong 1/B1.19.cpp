#include<iostream>
#include<fstream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
	taoFile();
	docFile();
}
void taoFile(){
	fstream output;
	output.open("songuyen.inp",ios::out|ios::binary);
	if (output){
		int a[10];
		int n=1000;
		srand((unsigned)time(NULL));
		for (int i=1;i<=n;i++){
			for (int j=0;j<10;j++){
				a[j]=rand()%100;
				cout<<a[j]<<" ";
			}
			output.write(reinterpret_cast<char *>(&a),sizeof(a));
			output.write("\n",1);
			cout<<endl;
		}
		output.close();
	}
}