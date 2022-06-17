 #include<iostream>
 using namespace std;
int tinhTong(int n);
 int main(){
 	int n;
 	cin>>n;
 	int kq = tinhTong(n);
 	cout<<kq;
 }
 int tinhTong(int n){
 	int kq=0;
 	int tmp=0;
 	for (int i=1;i<=n;i++){
 		tmp=tmp+i;
 		kq+=tmp;
	}
 	return kq;
 }