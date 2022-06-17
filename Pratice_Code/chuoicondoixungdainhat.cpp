#include<iostream>
#include<string.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int maxlen=1;
	int start=0;
	int n=s.length();
	for (int i=0; i<n;) {
		int k=i;
		int j=i;
		while(k<n-1 && s[k]==s[k+1]) k++;
		i=k+1;
		while(k<n-1 && j>0 && s[k+1]==s[j-1]) {
			k++;
			j--;
		}
		int newlen = k-j+1;
		if (newlen>maxlen) {
			start=j;
			maxlen=newlen;
		}
	}
	cout<<s.substr(start,maxlen);
}