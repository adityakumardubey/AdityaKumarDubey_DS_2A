#include <stdio.h>
int main()
{
    int i,j,k,m,n,p,q;
    int a[10][10],b[10][10],prod[10][10];
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
     if(n==p)
      {
          for(i=0;i<m;i++)
          {
             for(j=0;j<q;j++)
               {
                 prod[i][j]=0;
                 for(k=0;k<n;k++)
                 {
                    prod[i][j]+=a[i][k]*b[k][j];
                 }
               }
          }
        printf("multiplication of two matrices: \n");
        for(i=0;i<m;i++)
         {
          for(j=0;j<q;j++)
           {
            printf("%d ", prod[i][j]);
           }
          printf("\n");
         }
     }

    return 0;
}
