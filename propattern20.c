#include<stdio.h>

int main()
{
	int i,j,k;
	for(i=4;i>=1;i--)
	{ 
	   for(k=1;k<=i;k++)
	   {
	   	 printf(" ");
	   } 
		for(j=i;j<=4;j++)
		{
		  printf(" *");
		}
	   printf("\n");		
    }
}
