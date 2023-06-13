#include<iostream>
using namespace std;
  void mergefunc(int arr[],int l,int m,int r)
   {
    int size1=m-l+1;
    int size2=r-m;
    int aux1[size1];
    int aux2[size2];
   for(int i=0;i<size1;i++)
         {aux1[i]=arr[l+i];}
    for(int i=0;i<size2;i++)
    	{aux2[i]=arr[m+1+i];}
    int k=l;int i=0;int j=0;
    while(i<size1 && j<size2)
     {
         if(aux1[i]<aux2[j])
         	{arr[k]=aux1[i];
             i++;k++;}
         if(aux2[j]<aux1[i])
         	 {
         	 arr[k]=aux2[j];
         	  j++,k++;
         	 }
      }
     while(i<size1)
     	{arr[k]=aux1[i];i++;k++;}
     while(j<size2)
       {arr[k]=aux2[j];j++;k++;}
  }
void mergesort(int arr[],int lb,int ub)
   {
   	//int mid=lb+ub/2;
      if(lb<ub)
       {
        int mid=(lb+ub)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        mergefunc(arr,lb,mid,ub);       
       }
       if(lb>ub)
       	return;
   }
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
      {
         cin>>arr[i];
      }
  mergesort(arr,0,size-1);
  for(int i=0;i<size;i++)
  	 {
  	   cout<<arr[i]<<" ";
  	 }
  	return 0;
}