
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter A Number");
	scanf("%d",&a);
	printf("Enter A Number");
	scanf("%d",&b);
	printf("Enter A Number");
	scanf("%d",&c);
	a>b?(a>c?printf("a"):printf("c")):b>c?printf("b"):printf("c");
}
