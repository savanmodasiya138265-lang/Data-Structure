#include<stdio.h>

void main()
{
    int a[5],b[5],c[10];
    int i,j=0;

    for(i=0;i<5;i++)
    {
        printf("\n Enter number for first array : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n %d",a[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("\n Enter number for second array : ");
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n %d",b[i]);
    }
    for(i=0;i<5;i++)
    {
        c[j]=a[i];
        j++;
    }
    for(i=0;i<5;i++)
    {
        c[j]=b[i];
        j++;
    }

    printf("\n merge values are : ");

    for(i=0;i<10;i++)
    {
        printf("\n %d",c[i]);
    }
}
