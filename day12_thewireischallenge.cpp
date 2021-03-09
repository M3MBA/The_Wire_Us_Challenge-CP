#include<iostream>
using namespace std;

int main()
{
  int N,count = 1;
  cin>>N;
  int price[N];
  for(int i=0;i<N;i++)
  {
    cin>>price[i];
  }
  cout<<1<<"  ";
  for(int j=0;j<N-1;j++)
  {

    if(price[j] < price[j+1])
    {
      count++;
    }
    else count = 1;
    cout<<count<<"  ";
  }
  cout<<"END";
}
