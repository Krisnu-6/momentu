#include<stdio.h>

main()
{
	char per;
	printf("enter per=");
	scanf("%C",&per);
	if((per>='a' && per<='z')||(per>='A' && per<='Z'))
	{
		printf("per %c is aalphabet",per);
	}
	else if (per>='0' && per<='9')
	{
		printf("per %c is speaial character",per);
	}
}