//Write a program to input 5 digit integer number and print sum of digits in it.
#include <stdio.h>
void main (){
	int a,sum=0,rem,backup;
	float pa,pb,pc,pd;
	printf("Enter a number");
	scanf("%d",&a);
	While(a!=0);{
		rem=a%10;
	    sum=sum+rem;
		a=a/10;	
	}
	printf("Sum=%d",sum);
}
