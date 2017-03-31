#include <stdio.h>
#include <stdlib.h>

void hello1(void)
{
  fprintf(stdout, "This literal is displayed on standard output\n");
}

void hello2(void)
{
  const char msg[] = "Another message\n";
  printf(msg);
}

int main(void)
{
  hello1();
  
  return EXIT_SUCCESS;
}
