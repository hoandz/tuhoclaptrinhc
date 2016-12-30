/*
	input: n
	output: S(n)= 1^2 + 2^2 + 3^2 + ... + n^2
*/
#include <stdio.h>

main(){
	float S = 0;
	int n,i;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	//su dung vong lap for
	for(i = 0; i <= n; i++){
		
		S +=i*i;
	
	}
	
	printf("Ket qua bieu thuc: %.2f ", S);

}
