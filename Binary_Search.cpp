#include <iostream>
using namespace std;

int main() {
  int  arr[]={1,3,6,13,17,19,24,29,30,32,35};
  int target;
  cout<< "enter target \n";
  
  cin>> target;
  int lb=0;
  int ub=10;
  int flag=0;
  int mid = lb+((ub-lb)/2);
  while(lb<=ub)
    {
      mid = lb+((ub-lb)/2);
      if(arr[mid]==target)
      { flag=1;
         break;
      }
      else if(arr[mid]<target)
      {
        
        lb = mid+1;
      }
      else if(arr[mid]>target)
      {
      
        ub = mid - 1;
      }
      
    }
  if(flag==0)
    cout<< "element not found";
  else 
    cout<<"element found at "<< mid <<" index\n";
  
  }
