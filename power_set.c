//power set

#include<stdio.h>
#include<math.h>

void main()
{
	int a[10],n,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	k=pow(2,n);
	for(int c=0;c<k;c++)
	{
		for(int j=0;j<n;j++)
		{
			if(c&(1<<j))
				printf("%d",a[j]);
		}
		printf("\n");
	}
}
	