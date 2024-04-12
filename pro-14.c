
#include<stdio.h>
void main(){
	int n1,n2;
	printf("Enter N1  :");
	scanf("%d",&n1);
	printf("Enter N2  :");
	scanf("%d",&n2);
	n1=n1*n2;
	n2=n2/n2;
	n1=n1/n2;
	printf("After Swiping n1=%d And n2=%d",n1,n2);	
}
``