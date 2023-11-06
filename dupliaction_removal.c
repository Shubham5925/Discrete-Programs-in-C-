#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],b[10],n;
    printf("Enter the size of array A:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the array element at index %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("Inputted array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    printf("Enter the size of array B :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the array element at index %d : ",i);
        scanf("%d",&b[i]);
    }
    printf("Inputted array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");

    printf("After dublication removal:\n");
	//printf("saving element to different array:");
    /*for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(n==0 || n==1)
				{
					printf("Having 1 or less than 1 elemnt");
				}
				else{

				}
		}		
	}
	*/
	printf("Saving element to same arrya without extra space:");
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(n==0 || n==1)
            printf("only 1 element or no elment");
        else if(a[i]!=a[i+1])
        {
            a[j++]=a[i];
        }
    }
    for(int i=0;i<j;i++ )
    {
        printf("%d",a[i]);
    }
    

    getch();

}