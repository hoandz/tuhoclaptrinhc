#include <stdio.h>

main(){
	
	int n,i;
	float S = 0;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
			
	}
	while (n <= 0);
	
	for(i = 1; i <= n; i++)
	{
		S *=i;
		
	}
	printf("\nS = %f", S);
	getch();
}
