#include <stdio.h>
#include <stdlib.h>

void hello1(void)
{
  const char msg[] = "This literal is displayed on standard output\n";
  printf(msg);
}

void hello2(void)
{
  printf("Another message\n");
}

int main(void)
{
  hello1();
  
  return EXIT_SUCCESS;
}
