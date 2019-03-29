#include <stdio.h>

int main()
{

  // create enum type
  enum Company
  {
    GOOGLE,
    FACEBOOK,
    XEROX,
    YAHOO,
    EBAY,
    MICROSOFT
  };

  // declare variables
  enum Company xerox = XEROX;
  enum Company google = GOOGLE;
  enum Company ebay = EBAY;

  printf("The value of XEROX is %d, the value of GOOGLE is %d, the value of EBAY is %d.\n", xerox, google, ebay);
  return 0;
}