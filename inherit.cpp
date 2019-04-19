#include <iostream>

using namespace std;

class Shap
{
  public:
    void setWidth(int w)
    {
      width = w;
    }
    void setHeight(int h)
      {
         height = h;
      }
  protected:
    int width;
    int height;
};

class Rectangle: public Shap
{
  public:
      int getArea()
      { 
         return (width * height); 
      }
};

int main() 
{
  Rectangle  re;
 
  re.setWidth(5);
  re.setHeight(7);
 
   // 输出对象的面积
  std::cout << "Total area: " << re.getArea() << endl;
 
  return 0;
}