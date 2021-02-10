#include <iostream>
using namespace std;

int main()
{
  char string[] = {"IAmACompetitiveProgrammer"};
  for(int i=0;i<strlen(string);i++)
  {
    if(isupper(string[i+1]))
    cout<<string[i]<<endl;
    else cout<<string[i];
  }
}
