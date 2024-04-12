
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter The First Number  :");
	scanf("%d",&a);
	printf("Enter The Second Number  :");
	scanf("%d",&b);
	printf("Enter The Third Number  :");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("A is Largest Number");
	}
	else if(b>c)
	{
	printf("B is Largest Number");
}
else
{
	printf("C is Largest Number");
}
}
