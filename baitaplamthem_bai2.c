#include <stdio.h>

main(){
	float tong = 0;
	int n, i;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	//su dung vong lap for
	for(i = 0; i <= n; i++){
		
		tong += i * i;
	
	}
	
	printf("Ket qua bieu thuc: %.2f ", tong);

}
