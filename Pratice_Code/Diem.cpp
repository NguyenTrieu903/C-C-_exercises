#include<iostream>
#include<string>

using namespace std;
int main() {
	char s[100];
	gets(s);
	int n = strlen(s);
	int diem=0;
	int tong=0;
	for (int i=0;i<n;i++){
		if (s[i]=='V'){
			diem++;
		}else {
			diem=0;
		}
		if (diem!=0){
			tong+=diem;
		}
	}
	cout<<tong<<endl;
}