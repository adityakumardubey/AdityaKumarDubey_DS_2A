#include <stdio.h>
int main()
{
    int i,j,m,n,p,q;
    int a[10][10],b[10][10],diff[10][10];
    scanf("%d%d%d%d",&m,&n,&p,&q);
    for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
       scanf("%d",&a[i][j]);
     }
    for(i=0;i<p;i++)
     {
         for(j=0;j<q;j++)
            scanf("%d",&b[i][j]);
     }
    if((m==p)&(n==q))
     {
         for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
             diff[i][j]=a[i][j]-b[i][j];
      }
     printf("Subtraction of two matrices: \n");
     for(i=0;i<m;i++)
        {
         for(j=0;j<n;j++)
         {
           printf("%d ", diff[i][j]);
         }
         printf("\n");
        }
     }

    return 0;
}
