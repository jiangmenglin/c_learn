#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  vector<int> vec;
  int i;

  cout << "vector size:" << vec.size() << endl;
  for (i =0;i < 5;i++)
  {
    vec.push_back(i*i);
  }  
  cout << "vector size:" << vec.size() << endl;

  // 访问向量中的 5 个值
   for(i = 0; i < 5; i++){
      cout << "value of vec [" << i << "] = " << vec[i] << endl;
   }

   // 使用迭代器 iterator 访问值
   vector<int>::iterator v = vec.begin();
   while(v != vec.end())
   {
     cout << "the value of v = " << *v << endl;
     v++;
   }
   return 0;
}

