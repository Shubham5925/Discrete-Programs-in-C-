//cartesian product of two set

#include<stdio.h>
void main()
{
	int a[10],b[10],c[20],n,m;
	printf("Enter the size of array A :");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter the size of array B :");
	scanf("%d",&m);
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);
	
	//Removing duplication from set A & B
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(int k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			if(b[i]==b[j])
			{
				for(int k=j;k<m;k++)
				{
					b[k]=b[k+1];
				}
				m--;
				j--;
			}
		}
	}
	
	printf("Cartesian Product is:");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("(%d,%d)",a[i],b[j]);
		}
	}
}