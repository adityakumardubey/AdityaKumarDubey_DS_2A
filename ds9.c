#include<stdio.h>
void main()
{
    int a[100],b[100],c[100],a1,b1,c1,i,j,flag=0;
    printf("ADITYA KUMAR DUBEY\n");
    printf("enter size of set A=");
    scanf("%d",&a1);
    printf("enter elements of set A=");
    for(i=0;i<a1;i++)
        scanf("%d",&a[i]);
    printf("enter size of set B=");
    scanf("%d",&b1);
    printf("enter elements of set B=");
    for(i=0;i<b1;i++)
        scanf("%d",&b[i]);
    c1=a1+b1;
    for(i=0;i<a1;i++)
        printf("%d ",a[i]);
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
            printf("%d ",b[i]);
        }
        flag=0;
    }
}

