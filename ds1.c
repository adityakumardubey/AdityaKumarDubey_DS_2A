#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("enter number of terms");
    scanf("%d",&n);
    printf("Enter the elements of array ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The elements are ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
