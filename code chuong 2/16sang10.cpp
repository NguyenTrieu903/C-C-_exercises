#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
void chuyen16sang10 (char s[], int &n);
int main (){
	char s[20];
	cin>>s;
	int n;
	chuyen16sang10(s,n);
	cout<<n;
}
void chuyen16sang10 (char s[], int &n){
	strrev(s);
	n=0;
	int len = strlen(s);
	for (int i=0;i<len;i++){
		if (s[i]>='0' && s[i]<='9')
			n=n+(s[i] - '0')*pow(16,i);
		else 
			n=n+(s[i] +10- 'A')*pow(16,i);
	}
}