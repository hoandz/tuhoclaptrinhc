#include <stdio.h>

main(){
	float tich = 1;
	int n,i;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	//su dung vong lap for
	for(i = 1; i <= n; i++){
		
		tich *= i ;
	
	}
	
	printf("Ket qua bieu thuc: %.2f ", tich);

}
