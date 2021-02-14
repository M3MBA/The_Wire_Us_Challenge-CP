#include<iostream>
using namespace std;
int main()
{
  char string[] = {"aaabbccds"};

  for(int i=0;i<strlen(string);i++)
  {
    int count = 1;
    for(int j=i+1;i<strlen(string);j++)
    {
      if(string[i]==string[j])
      {
        count += 1;
      }
      else break;
    }
    if(count > 1)
    {
      cout<<string[i]<<count;
    }
    else cout<<string[i];
    i = i+count-1;
  }
}
