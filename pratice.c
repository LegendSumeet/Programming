#include<stdio.h>
int main()
{
  int sum [5];
   printf("Enter thre numbers\n");
   for(int i=0;i<5;i++)
   {
     scanf("%d",&sum[i]);
   }
   for(int i=0;i<5;i++)
   {
     printf("%d\n",sum[i]);
   }
    return 0;
}
