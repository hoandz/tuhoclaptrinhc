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

main(){
	int n = 5;
	double x = 3;
	
	double tong = 0;
	int i = 0;
	// i = 1 -> 5
	for (i = 0; i < n; i++) {
		printf("Tinh tong cua: x: %.0lf mu: %d\n", x, 2*i+1);
		tong = tong + tinhMu(x, 2*i + 1);
	}
	
	printf("Tong: %lf", tong);

}
