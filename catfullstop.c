#include <stdio.h>

int main(void) {
	char a[50];int i=0;
	scanf("%s",a);
	//strcat(a,".");
	while(a[i]!='/0')
	{
		i++;
	}
	a[i]='.';
	printf("%s",a);
}
