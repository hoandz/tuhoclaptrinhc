#include <stdio.h>
#include <conio.h>

double tinhMau(int n) {
	float tong = 0;
	int i;
	for(i = 0; i <= n; i ++){
		tong += i;
	}
	return tong;
}
main(){
	int x;
	printf("Nhap so X: ");
	scanf("%d", &x);
	
	int n;
	printf("Nhap so n: ");
	scanf("%d", &n);
	
	double tong = 0;
	int i = 0;
	
	for (i = 1; i <= n; i++) {
		tong += x/tinhMau(i);
	}
	printf("Ket qua: %lf", tong);
	
	
	
}
