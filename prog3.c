void main()
{
    int a[5],b[5],c[5];
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
        c[j]=a[i]+b[i];
        j++;
    }

    printf("\n addition values are : ");

    printf("\n Array A %5 Array B %5 Array C");

    for(i=0;i<5;i++)
    {
        printf("\n %5d  +  %5d  = %5d ",a[i],b[i],c[i]);
    }
}
