#include <stdio.h>
int main()
{
  int sum[3][2];
  printf("Enter thre numbers\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      scanf("%d", &sum[i][j]);
    }
  }
    for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d", sum[i][j]);
    }
  }




return 0;
}
