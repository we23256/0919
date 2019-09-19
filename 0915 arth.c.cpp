#include<stdio.h>
int main()
{
	int a, b;
	
	printf("첫번째 수 :");
	scanf("%d",&a);
	
	printf("두번째 수 :");
	scanf("%d",&b);
	
	printf("%d + %d = %d\n", a, b, (a+b));
	printf("%d - %d = %d\n", a, b, (a-b));
	printf("%d * %d = %d\n", a, b, (a*b));
	printf("%d / %d = %d\n", a, b, ((float)a/b));
	
	return 0;
}

