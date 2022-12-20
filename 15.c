#include<stdio.h>
void main()
{
    int m,n,o;
    printf("\n Enter no of rows,columns and pages:");
    scanf("%d%d%d",&m,&n,&o);
    int A[m][n][o],*orig,i,j,k,Add,dec;
    printf("\n Enter the index(i,j,k):");
    scanf("%d%d%d",&i,&j,&k);
    orig=&A[i][j][k];
    Add=A+i;
    Add=Add+(j*o*sizeof(A[i][j][k]));
    Add=Add+(k*sizeof(A[i][j][k]));
    printf("%d is the address of (%d,%d) indexed element",Add,i,j);
    if(orig==Add)
        printf("\n Verified");
}

