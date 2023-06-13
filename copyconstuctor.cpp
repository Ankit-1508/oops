//example of the copy cosntructor
#include<iostream>
using namespace std;
  class A
  {
     int a,b;
     public:
     A(int x,int y)
     {
       a=x;
       b=y;
     }
     A(A &ref)
     {
        a=ref.a;
        b=ref.b;
     }
    void show()
    {
      cout<<a<<" "<<b<<endl;
    }
  };
int main()
{
  A obj1(10,20);
  obj1.show();
  A obj2=obj1;
  obj2.show();
  return 0;
}
