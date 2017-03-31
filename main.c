#include <stdio.h>
#include <stdlib.h>

void hello1(void)
{
  printf(stdout, "This literal is displayed on standard output\n");
}

int main(void)
{
  hello1();
  
  return EXIT_SUCCESS;
}
