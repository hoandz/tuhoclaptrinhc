#include <stdio.h>
#include <conio.h>

double tinhMu(double x, int n) {
	double tich = 1;
	int i = 0;
	
	for (i = 0; i < n; i++) {
		tich = tich * x;
	}
	return tich;
}
double tinhMau(int n) {
	float tong = 0;
	
	int i;
	for(i = 1; i <= n; i ++){
		tong += i;
	}
	return tong;
}
	
main(){
	int x;
	printf("Nhap so X: ");
	scanf("%d", &x);
	
	double tong = 0;
	int n,i = 0;
	
	for (i = 1; i <= n; i++) {
		tong += tinhMu(x, i)/tinhMau(i);
	}
	printf("Ket qua: %lf", tong);
	
	
	
}
