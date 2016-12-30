#include <stdio.h>

main(){
	//khai bao he so a
	float a;
	printf("Nhap gia tri a: ");
	scanf("%f", &a);
	
	//khai bao he so b
	float b;
	printf("Nhap gia tri b: ");
	scanf("%f", &b);
	
	//khai bao he so c
	float c;
	printf("Nhap gia tri c: ");
	scanf("%f", &c);
	
	//tinh delta
	float delta = b*b - 4*a*c;
	
	/*kiem tra dk cua delta
	+ Neu delta < 0 => PT vô nghiem
	+ Neu delta > 0 => PT có 2 nghiem
	+ Neu delta => PT có nghiem kép, x = -b/2a;
	*/
	if(delta < 0){
		printf(" => pt vo nghiem!");
	}
	if(delta > 0){
		float canDelta = sqrt(delta);
		float X1 = (-b + sqrt(delta))/(2*a);
		float X2 = (-b - sqrt(delta))/(2*a);
		printf("=> pt co 2 nghiem la: %f %f", X1, X2);
	}
	if(delta == 0){
		float X = -b/(2*a);
		printf("=> pt co nghiem kep: %f",X);
	}
	
}
