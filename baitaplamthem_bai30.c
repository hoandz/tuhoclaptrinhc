#include <stdio.h>

main(){
	int n;
	printf("Nhap mot so n bat ky: ");
	scanf("%d", &n);
	int i;
	int tong = 0;
	
	//dung vong lap for de tinh
	
	for( i = 1; i<n; i++){
		if(n%i == 0)
			tong = tong+i;
			
	
	}
	if(tong == n){
		printf("%d la so hoan thien", i);
	}else{
		printf("%d khong phai la so hoan thien",i);
	}
	return 0;
}
