//dang in ra phu thuoc vao dac ta
#include <stdio.h>

main(){
	int x = 360, y= -1;
	long yl=-11;
	char *vb = "pro\0grammer";
	double dx= 3.14159265;
	printf("\nx= %010d\nx=%-010d\nx=%10o\nx%010o",x,x,x,x);
	printf("\nx=%-10d\nx=-010x",x,x);
	printf("\n\yl=%ld\ny=%10u\ny%10o\ny=%10x",y,y,y,y);
	printf("\n\nyl=%ld\nyl=%10lu\lyl=%10lo\ny=%-10lx",yl,yl,yl,yl);
	printf("\n\ndx=%010f\ndx=%010.3f\ndx=%-010.3f",dx,dx,dx);
	printf("\n\ndx=%10.8f\ndx=%10.0f\ndx%10g",dx,dx,dx);
	printf("\ndx=%10e\ndx=%10.2e",dx,dx);
	printf("\n\n%10s\n%10.7s\n%-10.7s\n%010.4s\n%10.0s",vb,vb,vb,vb,vb);
	printf("\n%0.3s\n%-010.3s",vb,vb);
	printf("%s",vb);
}
