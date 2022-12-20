#include<stdio.h>
void main()
{
    int a[20],b[20],c[40],i,j,k,n1,n2,n3,temp;
    printf("Enter size of array 1 and array 2\n");
    scanf("%d%d",&n1,&n2);
    printf("Enter elements of array 1 \n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements of array 2 \n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
        for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n2;i++)
    {
        for(j=i+1;j<n2;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }

    n3=n1+n2;
    j=0;
    k=0;
    for(i=0;i<n3;i++)
    {
        if(j<n1&&k<n2)
        {
            if(a[j]<b[k])
            {
                c[i]=a[j];
                j++;
            }
            else
            {
                c[i]=b[k];
                k++;
            }
        }
        else if(j<n1)
        {
            c[i]=a[j];
            j++;
        }
        else
        {
            c[i]=b[k];
            k++;
        }
    } printf("third array is  ");
    for(i=0;i<n3;i++)
    {
        printf("%d ",c[i]);
    }

}
