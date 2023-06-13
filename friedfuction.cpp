#include<iostream>
using namespace std;
  class A
  {
    private:
     int a,b;
    public:
     void input()
     {
      cout<<"enter value";
      cin>>a>>b;
     }
  friend void add(A ob);//friend function declaration
 };
void add(A ob)//friend function defintion
{
  int c;
  c=ob.a+ob.b;//accessing the a and b variable outside the class
  cout<<c;
}
int main()
{
 A kk;
 kk.input();
 //friend function can not called by the object.function name//
 //it can easily called by the simple function call//
 add(kk);//friend function is called by passing the object of the class A.
 return 0;
}