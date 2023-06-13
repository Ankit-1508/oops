#include<iostream>
using namespace std;
class area
{
	private:
	int length,breadth;
    public:
	area()
	{
		length=0;
		breadth=0;
	}
 friend int func(area b);
};
int func(area b)
   {
   	  b.length=10;
   	  b.breadth=30;
     return b.length*b.breadth;
   }
 int main()
 {
    area b;
   int result=func(b);
     cout<<result;
   return 0;
 }