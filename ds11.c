#include<stdio.h>
void main()
{
    int a[50],b[50],c[50],a1,b1,z=0,i,j,found=0;
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
                found=1;
            }
        }
        if(found==1)
        {
            c[z]=a[i];
            z++;
        }
        found=0;
    }
    printf("The inter section of sets are\n");
    {
        for(i=0;i<z;i++)
        {
            printf("%d",c[i]);
            printf("\n");
        }
    }

}

