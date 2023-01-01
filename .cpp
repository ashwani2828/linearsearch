#include<iostream>
using namespace std;
int check(int ar[],int n,int key)
{
 
 
  for (int i = 0; i < n; i++)
  {
    if(key==ar[i])
    {
      return 1;

    }
  }
 
}
int main()
{
  int k;
  cout<<"enter the key"<<endl; 
  cin>>k;   
  int arr[5]={1,2,3,4,5};
  bool o =check(arr,5,k);
if (o==1)
{cout<<"the key is actually found"<<endl;
}
else{
  cout<<"the key is absent"<<endl;
}
return 0;
}
