#include<stdio.h>
int main()
{
	int a, b;
	
	printf("ù��° �� :");
	scanf("%d",&a);
	
	printf("�ι�° �� :");
	scanf("%d",&b);
	
	printf("%d + %d = %d\n", a, b, (a+b));
	printf("%d - %d = %d\n", a, b, (a-b));
	printf("%d * %d = %d\n", a, b, (a*b));
	printf("%d / %d = %d\n", a, b, ((float)a/b));
	
	return 0;
}

