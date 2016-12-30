#include <stdio.h>

 main (){
	//nhap nhiet do F
	float F;
	printf("Nhiet do F: ");
	scanf("%f", &F);
	
	//chuyen tu do f sang do c
	printf("Nhiet do hien tai la: %.3f oC", 5*(F - 32)/ 9);
}
