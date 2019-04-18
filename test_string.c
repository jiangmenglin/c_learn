#include <stdio.h>
#include <string.h>
 
int main ()
{
   const char str[] = "http://www.runoob.com";
   const char ch = '.';
   char *ret;
 
   ret = (char*)memchr(str, ch, strlen(str));
 
   printf("|%c| 之后的字符串是 - |%s|\n", ch, ret);

   char str1[15];
   char str2[15];
   int ret1;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret1 = memcmp(str1, str2, 5);

   if(ret1 > 0)
   {
      printf("str2 小于 str1");
   }
   else if(ret1 < 0) 
   {
      printf("str1 小于 str2");
   }
   else 
   {
      printf("str1 等于 str2");
   }
 
   return(0);
}