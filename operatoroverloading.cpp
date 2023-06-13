#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
       a=x;
       b=y;
    }
    void showdata()
    {
     cout<<a<<" "<<b;
    }
    /*complex add(complex c)
     {
      complex temp;// we are just creating the object of the complex class
      temp.a=a+c.a;//temp ke "a" me c1 ka "a" + c2 ke "a" ko add kar do//
      temp.b=b+c.b;//temp ke "b" me c1 ka "b" + c2 ke "b" ko add kar do//
      return temp; //this temp object also contains the a as well as b//
     }*/
    complex operator +(complex c)
        {
         complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
       return temp;
    }
 };
int main()
{
 complex c1,c2,c3;
 c1.setdata(2,4);
 c2.setdata(5,6);
 c1.showdata();
 cout<<endl;
 c2.showdata();
 //c3=c1+c2;//because the c1 and c2 are not of the primitive data type  but compiler only knows the addition of the primitive datatypes//
 //c3=c1.add(c2);//c1 calls add  function and c2 is pass as the argument in the add function and value return by the add fucntion is stored in the c3;
  c3=c1+c2;
  cout<<endl;
 c3.showdata();
 return 0;
}
