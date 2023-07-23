#include <stdio.h>


int main(int argc, char *argv[])
{
   printf("%d", argc);
   printf("item #1: %s\n", argv[0]);
   printf("item #2: %s\n", argv[1]);
   printf("item #3: %s\n", argv[2]);
   printf("item #4: %s", argv[3]);
   return (0);
}
