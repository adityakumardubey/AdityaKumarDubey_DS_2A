#include<stdio.h>
void main()
{
    int a[50],n,count=0,j,i,temp,b;
    printf("Enter number of element  ");
    scanf("%d",&n);
    printf("Enter elements  ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;)
    {
        for(j=0;j<n;j++)
        {

            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>1)
        {
            printf("\n%d is repeated upto %d  times \n",a[i],count);
        }

        i=i+count;
        count=0;
    }
}
