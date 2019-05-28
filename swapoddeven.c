#include <stdio.h>

int main(void) {
	char a[20],temp;
	scanf("%s",a);
	int i;
	for(i=0;a[i]!='\0';i=i+2)
	{
	 temp=a[i];
	 a[i]=a[i+1];
	 a[i+1]=temp;
	}
	printf("%s",a);
}
