#include<iostream>

using namespace std;

class Box 
{
  public:
    double length;   // 长度
      double breadth;  // 宽度
      double height;   // 高度
};

int main()
{
  Box box1;
  Box box2;
  double volume = 0.0;     // 用于存储体积

  // box 1 详述
   box1.height = 5.0; 
   box1.length = 6.0; 
   box1.breadth = 7.0;
 
   // box 2 详述
   box2.height = 10.0;
   box2.length = 12.0;
   box2.breadth = 13.0;
 
   // box 1 的体积
   volume = box1.height * box1.length * box1.breadth;
   cout << "box1 的体积：" << volume <<endl;
 
   // box 2 的体积
   volume = box2.height * box2.length * box2.breadth;
   cout << "box2 的体积：" << volume <<endl;
   return 0;
}