//difference of two sets

#include<stdio.h>
void main()
{
	int a[10],b[10],c[20],n,m,flag=0;
	printf("Enter the size of array A :");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter the size of array B :");
	scanf("%d",&m);
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);
	
	printf("Difference A-B");
	for(int i=0;i<n;i++)
	{
		flag=0;
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
				flag=1;
		}
		if(flag==0)
			printf("%d",a[i]);
		
	}
	printf("Difference B-A");
	for(int i=0;i<n;i++)
	{
		flag=0;
		for(int j=0;j<m;j++)
		{
			if(b[i]==a[j])
				flag=1;
		}
		if(flag==0)
			printf("%d",b[i]);
	}
}
		