#include<stdio.h>

main()
{
	char k;
	printf("press S to sunday");
	printf("\npress m to monday");
	printf("\npress T to tuesday");
	printf("\npress w to wednesday");
	printf("\npress t to thursday");
	printf("\npress f to firday");
	printf("\npress s to saturday");
    printf("%c",&k);
    switch(k)
    {
    	 
    	 case'S' :
		        printf("sunday");
		        break;
		 case'm' :
		        printf("monday");
		        break;
		 case'T' :
		        printf("tuesday");
		        break;
		 case'w' :
		        printf("wednesday");
		        break;
		 case't' :
		        printf("thursday");
		        break;
		 case'f' :
		        printf("firday");
		        break;
		 case's' :
		        printf("saturday");
		        break;
		default  :
			    printf("plz enter vaild choice");
	}
}
