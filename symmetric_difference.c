//symetric difference
#include<stdio.h>
void main()
{
	int a[10],b[10],c[10],n,m,flag=0,k=0;
	printf("Entr the size of setA");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	//Removing duplication
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(int k=j;k<n-1;k++)
				{
					a[k]=a[k+1];

				}
				n--;
				j--;
			}
		}
	}

	printf("Enter the size of setB");
	scanf("%d",&m);
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);

	//Removing duplication

	for(int i=0;i<m;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			if(b[i]==b[j])
			{
				for(int k=j;k<m-1;k++)
				{
					b[k]=b[k+1];
				}
				m--;
				j--;
				
			}
		}
	}
	
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
			k++;
			c[k]=a[i];
			
		
	}
	
	for(int i=0;i<n;i++)
	{
		flag=0;
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
				flag=1;
		}
		if(flag==0)
			printf("%d",b[i]);
			c[k]=b[i];
	}

	
}
