#include<stdio.h>

int main()

{

  int i,j,k,base=1,n;

  int a[10][10]={1};//初始化数组全为一，为了满足当n=1时的巧妙设计。

  scanf("%d",&n);

  for(k=0;k<n/2;k++)

   {

     //行不变，列加加

     for(i=k;i<=n-1-k;i++)

        a[k][i]=base++;

     //列不变，行加加

     for(j=k+1;j<n-1-k;j++)

        a[j][n-1-k]=base++;

    //行不变，列减减

     for(i=n-1-k;i>k;i--)

        a[n-1-k][i]=base++;

    //列不变，行减减

     for(j=n-1-k;j>k;j--)

        a[j][k]=base++;

     if(n%2==1)

        a[(n-1)/2][(n-1)/2]=base;//如果N为奇数，中心的一个为最后一个数，即N*N；

   }

  

   for(i=0;i<n;i++)

   {

     for(j=0;j<n;j++)

        printf("%3d",a[i][j]);

     printf("\n");

   }

   return 0;

} 
