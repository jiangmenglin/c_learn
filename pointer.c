#include<stdio.h>

int main() {
  int var1;
  char var2[10] ;

  printf("var1 变量的地址： %p\n", &var1  );
  printf("var2 变量的地址： %p\n", &var2  );

  int var = 20;
  int *ip = NULL;
  //NULL 值的指针被称为空指针
  printf("Address stored in ip variable: %p\n", ip );

  ip = &var;

  printf("Address of var variable: %p\n", &var  );
 
   /* 在指针变量中存储的地址 */
   printf("Address stored in ip variable: %p\n", ip );
 
   /* 使用指针访问值 */
   printf("Value of *ip variable: %d\n", *ip );
 
  return 0;
}