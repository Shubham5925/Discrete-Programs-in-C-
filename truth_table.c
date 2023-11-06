//truth table-AND,OR,NOT

#include<stdio.h>
void main()
{
	printf("AND TRUTH TABLE\n");
	printf("A\tB\tA^B\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d\t%d\t%d\n",i,j,i*j);
		}
	}

	printf("OR TRUTH TABLE\n");
	printf("A\tB\tAvB\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(i+j==2)
			{
				printf("%d\t%d\t%d\n",i,j,1);
			}
			else
			{
				printf("%d\t%d\t%d\n",i,j,i+j);
			}
		}
	}

	printf("NOT TRUTH TABLE\n");
	printf("A\t~A\n");
	for(int i=0;i<2;i++)
	{
		if(i==0)
		{
			printf("%d\t%d\n",i,1);
		}
		else if(i==1)
		{
			printf("%d\t%d\n",i,0);
		}
		
		
	}
}