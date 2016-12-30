//chuong trinh minh hoa cac dac ta tuong ung voi cac loai so

#include <stdio.h>

main(){
	int a,b,c;
	long x,y,z;
	double s,t,u,v;
	printf("\n vao a b c");
	
	scanf("%d%o%x",&a,&b,&c);
	
	printf("\n vao x y z");
	
	scanf("%ld%lo%lx",&x,&y,&z);
	
	printf("\n vao s t u v");
	
	scanf("%lf%le%lf%le",&s,&t,&u,&v);
	
	printf("\a=%4d\nb=%4d\nc=%4d",a,b,c);
	
	printf("\nx%10ld\ny=%10ld\nz=%10ld",x,y,z);
	
	printf("\ns=%10.2e\nt=%10.2e\nu=%10.2g\nv=%10.2g",s,t,u,v);

}
