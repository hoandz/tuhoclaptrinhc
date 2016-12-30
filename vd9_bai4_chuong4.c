//chuong trinh minh hoa dac ta %* trong lenh scanf

#include <stdio.h>

main(){
	int a,b;
	
	float x,y;
	
	printf("\n doc 6 so(3 int, 3float)");
	
	scanf("%d%*2d%d%f%*f%f",&a,&b,&x,&y);
	
	
	printf("\na=%d\nb=%d\nx=%10.3e\ny=%10.6e",a,b,x,y);
}
//135 467 325 4538.26 1 6782
