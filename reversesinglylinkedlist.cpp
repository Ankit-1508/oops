#include<iostream>
using namespace std;
int main()
{
  struct node
  {
    int data;
    node* next;
    
    node(int x)
    {
       data=x;
       next=NULL;
    }
  };
  
return 0;
}