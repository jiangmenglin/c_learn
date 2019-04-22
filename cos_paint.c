#include<stdio.h>
#include<math.h>

int main()
{
  double y;
  int x,m;
  for(y = 1; y >= -1; y -= 0.1)  /*y为列方向，值从1到-1，步长为0.1*/
  {
    m = acos(y) * 10;  /*计算出y对应的弧度m，乘以10为图形放大倍数*/
    for(x=1;x<m;x++) printf(" ");
    printf("*"); /*控制打印左侧的 * 号*/
    for( ;x < 62 - m; x++)
    {
      printf(" ");
    }  
    printf("*\n"); /*控制打印同一行中对称的右侧*号*/

  }
  return 0;
}