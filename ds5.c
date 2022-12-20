#include<stdio.h>
void main()
{
    int a[50],n,i,s=0;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    s=((n+1)*(n+2))/2;
    printf("Enter terms\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s-a[i];
    }
    printf("The missing number is %d",s);
}
