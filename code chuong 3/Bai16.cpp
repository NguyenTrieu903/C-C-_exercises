 #include<iostream>
 #include<string.h>
 int chuThuong(char s[]);
  int chuHoa(char s[]);
 using namespace std;
 int main(){
 	char s[100];
 	cin.getline(s,20);
 	cout<<chuThuong(s);
 	cout<<endl;
 	cout<<chuHoa(s);
// 	cout<<s;
 }
int chuSo(char s[]){
	int d=0;
 	int n = strlen(s);
 	for (int i=0;i<n;i++){
 		if (s[i]>=48 && s[i]<=57){
 			d++;
		 }
	}
	return d;
}
bool chuThuong(char s[]){
 	int d=0;
 	int n = strlen(s);
 	for (int i=0;i<n;i++){
 		if (s[i]>=97 && s[i]<=122){
 			d++;
		 }
	}
	return d;
 }
 bool chuHoa(char s[]){
 	int d=0;
 	int n = strlen(s);
 	for (int i=0;i<n;i++){
 		if (s[i]>=65 && s[i]<=90){
 			d++;
		 }
	}
	return d;
 }