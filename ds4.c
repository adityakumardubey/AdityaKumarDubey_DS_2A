#include<stdio.h>
void main()
{
    int A[100],i,n,c=0,ele;
    printf("\n Enter no of elements in array:");
    scanf("%d",&n);
    printf("\n Enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("\n Enter element to be deleted:");
    scanf("%d",&ele);
    for(i=0;i<=n;i++)
    {
        if(A[i]==ele)
        {
            A[i]=A[i+1];
            c++;
        }
        if(c>0)
        {
            A[i]=A[i+1];
        }
    }
    if(c>0)
    {
        n--;
        printf("\n Changed array is:\n");
    }
    else
        printf("\n Element for deletion not found\nReturning original array:\n");
    for(i=0;i<n;i++)
        printf("%d ",A[i]);

}
