#include<stdio.h>
void main()
{
    int a[50],b[50],c[100],a1,b1,i,j,z=0,flag=0;
    printf("Enter number elements of set A\n");
    scanf("%d",&a1);
    printf("Enter elements of set A\n");
    for(i=0;i<a1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number elements of set B\n");
    scanf("%d",&b1);
    printf("Enter elements of set B\n");
    for(i=0;i<b1;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<a1;i++)
    {
        for(j=0;j<b1;j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            c[z]=a[i];
            z++;
        }
        flag=0;
    }
    for(i=0;i<b1;i++)
    {
        for(j=0;j<a1;j++)
        {
            if(b[i]==a[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            c[z]=b[i];
            z++;
        }
        flag=0;
    }
    for(i=0;i<z;i++)
    {
        printf("%d",c[i]);
        printf("\n");
    }
}
