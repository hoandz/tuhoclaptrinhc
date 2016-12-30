#include <stdio.h>

void main (){
	float x;
	printf("Nhap gia tri x: ");
	scanf("%f", &x);
	
	//
		float y;
	printf("Nhap gia tri y: ");
	scanf("%f", &y);
	
	//
		float z;
	printf("Nhap gia tri z: ");
	scanf("%f", &z);
	
	//
		float h;
	printf("Nhap gia tri h: ");
	scanf("%f", &h);
	
	//
	
	if(x>=y&&x>=z&&x>=h){
		printf("\nSo lon nhat la: X");
	}
	if(y>=x&&y>=z&&y>=h){
		printf("\nSo lon nhat la: Y");
	}
	if(z>=x&&z>=y&&z>=h){
		printf("\nSo lon nhat la: Z");
	}
	if(h>=x&&h>=y&&h>=z){
		printf("\nSo lon nhat la: H");
	}		
	
	
	
}
