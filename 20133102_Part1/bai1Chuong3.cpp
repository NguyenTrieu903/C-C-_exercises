 #include<iostream>
 using namespace std;
  int tinhxMup(int x , int p);
 int main(){
 	int x,p;
 	cin>>x>>p;
 	int luythua=tinhxMup(x,p);
 	cout<<luythua;
 }
 int tinhxMup(int x , int p){
 	int kq=1;
 	for (int i=1;i<=p;i++){
 		kq=x*kq;
	}
	return kq;
 }