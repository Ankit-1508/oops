#include<iostream>
using namespace std;
 void func()
 {
    static int static_value=1;//its value is always retain 
    int normal_variable=1;
    static_value++;
    normal_variable++;
    cout<<"static_value is"<<static_value<<" ";
    cout<<"normal_varible"<<normal_variable<<" ";
    cout<<endl;
 }
int main()
  {
    for(int i=0;i<5;i++)
    {
     func();
    }
    return 0;
  }