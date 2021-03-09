#include<iostream>
#include<string>
using namespace std;

void print24(char* n)
{

  int h1 = n[0]-48;
  int h2 = n[1]-48;
  h1 = h1*10+h2;
  if(n[8]=='P')
  {
    h1 += 12;
  }
  cout<<endl<<h1;
  for(int i=2;i<8;i++)
  {
    cout<<n[i];
  }
  cout<<" : 24 hour clock "<<endl;
}

int main()
{
  //time can be updated here
  char time[] = "07:05:45PM" ;
  cout<<time<<" : 12 hour clock";
  print24(time);
}
