#include<iostream>
using namespace std;
int main(){
	int a[100],n;
	cin>>n;
	int dem=0;
	for (int i=0;i<n;i++)
		cin>>a[i];
	for (int i=0;i<n;i++){
		dem=0;
		for (int j=0;j<n;j++){
			if (a[i]==a[j]){
				if(j<i)
					break;
				else 
					dem++;
			}
		}
		if (dem!=0)
			cout<<dem<<" ";
	}
}