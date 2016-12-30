#include <stdio.h>
#include <conio.h>

/*
S(n)=1/1 + 1/(1+2) + 1/(1+2+3)+...+1/(1+2+3+...+n)
S(1) = 1/1;
S(2) = 1/1 + 1/(1+2);
S(3) = 1/1 + 1/(1+2) + 1/(1+2+3);
S(3) = 1/s(1) + 1/s(2) + 1/s(3);

s(n) = 1 + ... + n
*/
// module
double tinhTu(double x, int n) {
	double tich = 1;
	int i = 0;
	
	for (i = 0; i < n; i++) {
		tich = tich * x;
	}
	return tich;
}

double tinhMau(int n) {
	// tinh ra s(n) = 1 + 2 + ... + n
	float tong = 0;
	int i;
	for(i = 0; i <= n; i ++){
		tong += i;
	}
	return tong;
}

double S(double x, int n) {
	double tong = 0;
	int i = 0;
	
	for (i = 1; i <= n; i++) {
		tong += tinhTu(x, i)/tinhMau(i);
	}
	
	return tong;
}

main(){
	double x = S(2, 1);
	printf("%.2lf", x); // gia tri phai la 4/3 = 1.33333333...
}
