#include<iostream.h>
#include<cs50.h>

void swap_max(int arr[],int l,int pos)
{
 int max=arr[pos];
 int t;
 
 for(int i=pos;i<l;i++)
 {
  if(arr[i]>max)
     {
      max=arr[i];
      t=i;
     }
 }
 }
 
 void ssort(int arr[],int l)
 {
  for(int i=0;i<l;i++)
  {
    swap_max(arr,l,i);
   }
 }
