#include <stdio.h>

main(){
	int n;
	printf("Nhap mot so n bat ky: ");
	scanf("%d", &n);
	int i;
	int tong = 0;
	
	for(i= 1; i <= n; i++){
		if(n%i==0){
		tong ++;
		printf("%d", i);
		}
	}
	printf("So uoc la: %d\n", tong);
	if(tong==2){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong phai la so nguyen to", n);
	}
}
