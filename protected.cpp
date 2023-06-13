#include<bits/stdc++.h>
using namespace std;
class parent
{
  protected:
  	int age;
};
class child:public parent
{
   public:
   void fun(int x)
     {
       age=x;
     }
    void fun_outpu()
    {
      cout<<age;
    }
};
int main()
 {
   child obj1;
  obj1.fun(5);
  obj1.fun_outpu();
  return 0;
 }