#include<stdio.h>

int main()

{

  int i,j,k,base=1,n;

  int a[10][10]={1};//��ʼ������ȫΪһ��Ϊ�����㵱n=1ʱ��������ơ�

  scanf("%d",&n);

  for(k=0;k<n/2;k++)

   {

     //�в��䣬�мӼ�

     for(i=k;i<=n-1-k;i++)

        a[k][i]=base++;

     //�в��䣬�мӼ�

     for(j=k+1;j<n-1-k;j++)

        a[j][n-1-k]=base++;

    //�в��䣬�м���

     for(i=n-1-k;i>k;i--)

        a[n-1-k][i]=base++;

    //�в��䣬�м���

     for(j=n-1-k;j>k;j--)

        a[j][k]=base++;

     if(n%2==1)

        a[(n-1)/2][(n-1)/2]=base;//���NΪ���������ĵ�һ��Ϊ���һ��������N*N��

   }

  

   for(i=0;i<n;i++)

   {

     for(j=0;j<n;j++)

        printf("%3d",a[i][j]);

     printf("\n");

   }

   return 0;

} 
