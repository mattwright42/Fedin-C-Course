#include <stdio.h>
#include <stdbool.h>

int main()
{

  float matt = 38.5;
  double matt2 = 76.123456780987281764;

  bool bool_variable = 1;

  enum primary_color
  {
    red,
    yellow,
    blue
  };

  enum primary_color my_color, gregs_color;

  enum month
  {
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
  };

  // Enumeration identifiers are treated as integer constants

  enum month this_month;

  this_month = February;
  // February will be equal to 1 because it is the second identifier listed inside the enum list
  // If you want to have a specific integer value associated with an enumeration identifier, the intger can be assigned to the identifier when the data type is assigned

  enum direction
  {
    up,
    down,
    left = 10,
    right
  };

  char broiled;
  broiled = 'T'; // single quotes for a char
  // broiled = T Thinks this is a bool_variable
  // broiled = "T" Thinks this is a string

  char x = '\n'; //escape sequence as char

  enum gender
  {
    male,
    female
  };
  enum gender my_gender;
  my_gender = male;

  enum gender another_gender = female;

  bool is_male = (my_gender == another_gender);

  char my_character = '\n';
  printf("%c", my_character);

  return 0;
}