#include<stdio.h>

void main()
{
    int a[50];
    int i,n,search;
    int flag=0;

    printf("Enter limit : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter number %d : ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\n Enter value to be search : ");
    scanf("%d",&search);

    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            printf("match done at %d position : ",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("value not found");
    }
}
