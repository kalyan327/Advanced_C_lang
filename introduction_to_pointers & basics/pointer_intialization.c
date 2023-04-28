#include<sdtio.h>
int main()
{
  int a=5;
  int *p;
  int *p=NULL;
  p = &a;
  printf("%p",p);
  printf("%d",*p);
  
}
