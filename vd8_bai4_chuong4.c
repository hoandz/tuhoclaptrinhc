//chuong trinh thu cac dac ta so va ki tu
#include <stdio.h>
main (){
	int a;
	
	long b;
	
	char ch[20],ck[20];
	
	printf("nhap a, mot day ky tu va b: ");
	
	scanf("%d%[0123456789]%[^0123456789]%5ld",&a,ch,ck,&b);
	
	printf("\na = %3d\nb=%10ld\nch=%s\nck=%6s",a,b,ch,ck);
	

}
