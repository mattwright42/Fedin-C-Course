#include <stdio.h>

int main()
{
  double rectangle_width = 5;
  double rectangle_height = 20;
  double rectangle_perimeter = (rectangle_width + rectangle_height) * 2;
  double rectangle_area = rectangle_width * rectangle_height;

  printf("The perimeter of the rectangle is %f.\n", rectangle_perimeter);
  printf("The area of the rectangle is %f.\n", rectangle_area);

  return 0;
}