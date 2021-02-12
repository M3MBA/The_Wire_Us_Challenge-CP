#include <iostream>
using namespace std;

int main()
{
  char string[] = {"acb"};
  int size = strlen(string);
  for(int i=0;i<size;i++)
  {
    int difference = 0;
    difference = int(string[i+1]) - int(string[i]);
        if(i != size-1)
          cout<<string[i]<<difference;
        else cout<<string[i];
  }
}
