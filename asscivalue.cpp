#include <iostream>
using namespace std;
int main()
{
 char *s;
 cin>>*s;

 while(*s!='\0')
  {
  printf("%c --> %d\n",*s,*s);
  s++;
  }
 return 0;
}