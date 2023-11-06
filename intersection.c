//intersection of two sets
#include<stdio.h>
void main()
{
	int a[10],b[10],c[20],n,m,s=0;
	printf("Enter the size of array A :");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter the size of array B :");
	scanf("%d",&m);
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				c[i]=a[i];
				s++;
			}
		}
	}
	
	//now removing duplication of c array
	
	for(int i=0;i<s;i++)
	{
		for(int j=i+1;j<s;j++)
		{
			if(c[i]==c[j])
			{
				for(int k=j;k<s-1;k++)
				{
					c[k]=c[k+1];
				}
				s--;
				j--;
			}
		}
	}
	
	printf("Intersection:");
	for(int i=0;i<s;i++)
		printf("%d",c[i]);
}
			
	