#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
char* daoNguocTuCoTrongChuoi(char *S) {
	//1. Khởi tạo mảng ketQua
	char* ketQua = new char[strlen(S)];
	int j = 0;
	int dem = 0;

	//2. Duyệt từng ký tự bắt đầu từ cuối chuỗi
	for(int i = strlen(S); i >= 0; i--) {
		if (i == strlen(S) || i == strlen(S)-1) //Xử lý ký tự '\0' bằng cách bỏ qua
			continue;

		//3. Đếm số lượng ký tự mình đi qua
		dem++;

		//4. Khi gặp khoảng trắng, thực hiện sao chép từ chuỗi qua mảng ketQua
		if (S[i] == ' ') {
			for(int k = i; k < i+dem; k++) {
				ketQua[j] = S[k+1];
				j++;
			}
			ketQua[j-1] = ' ';
			dem = 0;
		}

		//5. Xử lý từ ở đầu câu
		if (i == 0) {
			for(int k = i; k < i+dem; k++) {
				ketQua[j] = S[k];
				j++;
			}
		}

	}

	ketQua[strlen(S)-1] = '\0';

	return ketQua;
}

int main() {
	char S[300];
	fflush(stdin);
	fgets(S, 300, stdin);
	char* ketQua = daoNguocTuCoTrongChuoi(S);
	puts(strrev(ketQua));
}