#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a and b:-");
	scanf("%d%d",&a,&b);
	printf("a=%d\tb=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping a and b is :-");
	printf("\na=%d\tb=%d",a,b);
	
	return 0;
}
