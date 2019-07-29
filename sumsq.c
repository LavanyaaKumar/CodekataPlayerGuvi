#include <stdio.h>
int main(void) {
	// your code goes here
int a,n,sum=0;
scanf("%d",&a);
while(a!='\0')
{
	n=a%10;
	sum+=(n*n);
	a=a/10;
}
printf("%d",sum);
	return 0;
}
