#include <stdio.h>

/*define a function*/
double getAverage(int *arr, int size);

int main() {
  /*define 有5个元素的整数型数组*/
  int arr[5] = {1001, 100, 20, 3, 6};

  double avg;

  avg = getAverage(arr, 5);
   /* 输出返回值  */
  printf("Average value is: %f\n", avg );

  return 0;
}

double getAverage(int *arr, int size) 
{
  int    i, sum = 0;       
  double avg;          
 
  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
  }
 
  avg = (double)sum / size;
 
  return avg;
}