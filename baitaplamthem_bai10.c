#include <stdio.h>

main(){
	int i, soMu = 1;
	int x ;
	printf("nhap so x: ");
	scanf("%d", &x);
	
	for(i = 1; i < x; i++){
		soMu = soMu*i;
		
	}
	printf("Ket qua: %d", soMu);
}
