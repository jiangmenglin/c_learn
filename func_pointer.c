#include <stdio.h>

int max(int x, int y)
{
  return x > y ? x : y;
}

int main() 
{
  /*定义func_ptr为函数指针*/
  int (*func_ptr)(int, int);
  func_ptr = max; //or func_ptr = &max;

  int a, b, c, d;
 
    printf("请输入三个数字:");
    scanf("%d %d %d", & a, & b, & c);
 
    /* 与直接调用函数等价，d = max(max(a, b), c) */
    d = func_ptr(func_ptr(a, b), c); 
 
    printf("最大的数字是: %d\n", d);
 
    return 0;
}