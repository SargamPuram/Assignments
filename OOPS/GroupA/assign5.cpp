#include<iostream>
using namespace std;

template<class T>
void display(int s,T x[])
{
    for(int i=0;i<s;i++)
    {
        cout<<x[i]<<"\t";
    }
}

template<class T>
void sort(int s,T x[])
{
    for(int i=0;i<s;i++)
    {
       int min=i;
    
    for(int j=i+1;j<s;j++)
    {
        if(x[min]<x[j])
        {
            min = j;
        }
    }
    int temp = x[i];
    x[i]=x[min];
    x[min]=temp;
}
}
int main()
{
  int a[10], m,n;
  float f[10];
  cout<<"Enter the size of integer array: ";
  cin>>n;
  cout<<"\n Enter the element of integer array: ";
  for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
  cout<<"Enter the size of float array: ";
  cin>>m;
  cout<<"\n Enter the element of float array: ";
  for(int i=0;i<m;i++)
    {
      cin>>f[i];
    }
  cout<<"\n The integer array : ";
  display(n,a);
  cout<<"\nFloat array : ";
  display(m,f);

  sort(n,a);
  sort(m,f);
  cout<<"The integer afetr sorting : ";
  display(n,a);
  cout<<"the float array after sorting: ";
display(m,f);
  return 0 ;
    
  
  
}

