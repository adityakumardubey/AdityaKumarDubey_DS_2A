#include<stdio.h>
void main()
{
    int n;
    printf("\n Enter size of array:");
    scanf("%d",&n);
    int A[n],*orig,i,Add,dec;
    printf("\n Enter the index:");
    scanf("%d",&i);
    orig=&A[i];
    Add=A+i;
    printf("%d is the address of %dth element ",Add,i);
    if(orig==Add)
        printf("\n Verified");
}
