#include <stdio.h>

static int plus(int a) 
{
  printf("exec plus");
  return a + 1;
}
typedef int pplus;

int culculate(int b)
{
  printf("exec calculate");
  return b + 10;
}

  
