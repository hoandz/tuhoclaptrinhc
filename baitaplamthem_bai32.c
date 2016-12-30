#include <stdio.h>

main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	float x = sqrt((float)n);
	
	if((int)x == x){
		printf("%d la so chinh phuong", n);
	}else{
		printf("%d khong phai la so chinh phuong",n);
	}

}
