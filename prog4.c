#include<stdio.h>

void main()
{
    int a[10],i,max;

    for(i=0;i<10;i++)
    {
        printf("Enter %d number = ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        printf(" %d",a[i]);
    }

    max=a[0];

    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\n largest element is : %d ",max);
}
