#include<stdio.h>
void main()
{
    int m,n;
    printf("\n Enter no of row and column:");
    scanf("%d%d",&m,&n);
    int A[m][n],*orig,i,j,Add,dec;
    printf("\n Enter the index(i,j):");
    scanf("%d%d",&i,&j);
    orig=&A[i][j];
    Add=A+i;
    Add=Add+(j*sizeof(A[i][j]));
    printf("%d is the address of (%d,%d) indexed element",Add,i,j);
    if(orig==Add)
        printf("\n Verified");
}

