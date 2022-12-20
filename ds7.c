#include<stdio.h>
void main()
{
    int a[20],b[20],i,j,n;
    printf("Enter number of terms  ");
    scanf("%d",&n);
    printf("Enter terms  ");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("The original array is  ");
     for(i=0;i<n;i++)
    {
      printf("%d  ",a[i]);
    }
    printf("\nThe reversed array is  ");
    for(i=0;i<n;i++)
    {
        b[i]=a[n-i-1];
        printf("%d  ",b[i]);
    }
}
