#include <iostream>
using namespace std;

int main()
{
  char line[]={"Hello"};
  for(int i=0;i<strlen(line);i++)
  {
    if(line[i]!=line[i+1])
    {
      cout<<line[i];
    }
    else {
      cout<<line[i]<<"*";
      i++;
    }
  }
}
