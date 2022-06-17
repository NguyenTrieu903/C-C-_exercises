 #include<iostream>
 using namespace std;
  double tongPhanso(int n);
int tong(int n);
 int main(){
 	int n;
 	cin>>n;
 	double kq = tongPhanso(n);
 	cout<<kq;
 }
 double tongPhanso(int n){
 	double kq=0;
 	int tmp=0;
 	for (int i=1;i<=n;i++){
 		tmp+=i;
 		kq+=1.0/(tmp);
	 }
 	return kq;
 }