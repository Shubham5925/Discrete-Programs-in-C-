//Union of sets in c
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
		c[i]=a[i];
	
	for(int i=0;i<m;i++)
		c[n+i]=b[i];
	
	for(int i=0;i<(n+m);i++)
		printf("%d",c[i]);

	s=m+n;
	//Now removing duplicate elements
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
					//we can replace m+n by s if required
			}
		}
	}
	printf("\n");
	printf("Union of set:\n");
	for(int i=0;i<s;i++)
		printf("%d",c[i]);
}
	
	
	