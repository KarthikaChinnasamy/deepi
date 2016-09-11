#include <stdio.h>

int main(void) {


int i,j;
int count=0;
scanf("%d",&j);
while(j!=0)
{
i=j%10;
j=j/10;
count=count+1;
}
printf("%d",count);
	// your code goes here
	return 0;
}
