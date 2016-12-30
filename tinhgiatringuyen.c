#include <stdio.h>

void main(){
	//hien thi gia tri nhap tu ban phim
	int n,i;
	int Tong = 0;
	printf("Nhap gia tri n: ");
	scanf ("%d", &n);
	
	//su dung vong lap for de tinh gia tri
	for (i=0; i<=n; i++)
	{
		Tong +=i;
	}	
	printf("Ket qua la: %d", Tong);
	}
