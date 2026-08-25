#include<stdio.h>

void main()
{
    int a[10],i,j,temp=0;

    for(i=0;i<10;i++)
    {
        printf("Enter %d number = ",i+1);
        scanf(" %d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        printf(" %d",a[i]);
    }

    for(i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
        printf("\n %d",a[i]);
    }
}
