#include <stdio.h>
int main(void) {
char a[10],b[10];
int i,count=0,j;
scanf("%s",a);
while(a[count]!=0)
{
		count++;
}
//printf("%d",count);
j=count-1;

	for(i=0;i<count;i++)
    {
		b[i]=a[j];
		j--;
	}
	b[i]='\0';
	printf("%s",b);
}
