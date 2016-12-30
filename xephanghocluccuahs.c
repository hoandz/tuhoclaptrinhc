#include <stdio.h>
main(){
	
	int hocLuc;
	printf("Nhap diem hoc luc cua hoc sinh: ");
	scanf("%d", &hocLuc);
	
	//su dung ham if de tim ra hoc luc cua hs
	if(hocLuc < 4){
		printf("Truot!!");	
	}
	if(hocLuc>=4 && hocLuc<=6){
		printf("Trung Binh!!");	
	}
	if(hocLuc>=6 && hocLuc<=8){
		printf("Kha!!");	
	}
	if(hocLuc>=8 && hocLuc<9){
		printf("Gioi!!");	
	}
	if(hocLuc>=9 && hocLuc<=10){
		printf("Xuat Sac!!");	
	}
	

}
