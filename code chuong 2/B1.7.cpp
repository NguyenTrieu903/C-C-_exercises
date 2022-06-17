#include<iostream>
using namespace std;
void nhapchuoi(char s[]);
void xuatchuoi(char s[]);
void Delete(char s[],int vtr);
void xoaKhoangtrangThua (char s[]);
void hoaDautu(char s[]);
int main(){
	char s[100];
	nhapchuoi(s);
	xoaKhoangtrangThua(s);
	hoaDautu(s);
	xuatchuoi(s);
}
void hoaDautu(char s[]){
	strlwr(s);
	if (s[0]!=' '){
		if (s[0]>=97 && s[0]<=122){
			s[0]=s[0]-32;
		}
	}
	int n = strlen(s);
	for (int i=0;i<n-1;i++){
		if (s[i]==' '&&s[i+1]!=' '){
			if (s[i+1]>=97&&s[i+1]<=122){
				s[i+1]=s[i+1]-32;
			}
		}
	}
}
void xoaKhoangtrangThua (char s[]){
	int n = strlen(s);
	for (int i=0;i<n-1;i++){
		if (s[i]==' '&&s[i+1]==' ')
		{
			Delete(s,i);
			i--;
		}
	}
}
void Delete(char s[],int vtr){
	int n = strlen(s);
	for (int i=vtr+1;i<n;i++){
		s[i-1]=s[i];
	}
	s[n-1]='\0';
}
void nhapchuoi(char s[]){
	gets(s);
}
void xuatchuoi(char s[]){
	puts(s);
}