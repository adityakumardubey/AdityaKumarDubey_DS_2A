#include<stdio.h>
void main()
{
 int m,n;//Arjun Pandey(2100320130043)
 printf("Enter size of matrix m,n:\n");
 scanf("%d%d",&m,&n);
 int a[m][n],b[n][m];
printf("Enter elements of matrix:\n");
 int i,j;
 for(i=1;i<=m;i++)
 {
    for(j=1;j<=n;j++)
    {
        scanf("%d",&a[i][j]);
    }
 }

 printf("TRANSPOSE:\n");
  for(i=1;i<=n;i++)
 {
    for(j=1;j<=m;j++)
    {
        b[i][j]=a[j][i];
    }
 }
   for(i=1;i<=n;i++)
 {
    for(j=1;j<=m;j++)
    {
        printf("%d ",b[i][j]);
    }
    printf("\n");
 }
}
