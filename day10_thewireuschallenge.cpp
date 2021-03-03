#include<iostream>
using namespace std;

int main()
{
  int size,drift;
  cin>>size>>drift;
  int arr[size],reversedarr[size],temp;
  for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    while(drift--)
    {
      temp = arr[0];
      for(int k=0;k<size;k++)
      {
        arr[k] = arr[k+1];
      }
      arr[size-1] = temp;
    }
    for(int j=0;j<size;j++)
    {

        cout<<arr[j]<<"  ";
    }
}
