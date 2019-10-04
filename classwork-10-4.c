#include <stdio.h>

void foo(int x);

int main(int argc, char** argv){
  int i;
  double pi = 3.1415;
  char a = 'a';
  printf("Hello World.\n");

  printf("== a is: %c\n", a);
  //You use a placeholder wherever you want to print a varible.
  //This place holder has the format specifier %, the second character
  //has the type, such as a character value, c. Floating point f

  printf(" == pi is: %016.4f\n", pi);
  //%016.4f the 016.4 controls the formating - 16 means print into
  //a column of 16 charcaters, the .4 says exactly 4 digits after the decimal
  //the 0 says if there isnt enough digits before the decimal, it prints a 0
  //in the place I.e 0000000003.1415

  printf(" == a is: %c %f\n", a, pi);
  //this will read the line from left to right, and the %c will
  //read the varible a, and the %f will read the varible pi.

}
