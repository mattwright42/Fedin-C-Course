#include <stdio.h>

int main()
{
  char str[100];
  int i;

  printf("Enter a value: ");
  //This must be entered as a number, followed by a space, followed by a string
  scanf("%d %s", &i, str);

  printf("\nYou entered:%d::::::%s\n", i, str);

  return 0;
}