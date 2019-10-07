#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  void* v_ptr = malloc(10);
  //the void pointer points to the 10 bytes allocated by malloc.

  printf("== sizeof(int): %lu", sizeof(int));
  //this will print how many bytes it will take to store an int.

  int* n = malloc(sizeof(int));
  //this creates a varible with enough memory to store one int,
  //always returns the right size as used y the computer.

  *n = 32;
  printf("== *n: %d\n", *n);

  struct student* s = malloc(sizeof(struct student));
  //dynamiclly allocates the space for a struct student
  (*s).id = 933222222;
  s->gpa = 4.0;
  s->name = "Rey";
  //the arrow and the . are the same

  /*****************allocate array************/
  int size_of_array = 100;
  int i;
  int* array = malloc(size_of_array * sizeof(int));
  for(i = 0; i < size_of_array; i++){
    array[i] = 1;
  }

  //to free memory we use free()
  free(n);
  free(array);
  free(v_ptr);
  free(s);


  int** matrix = malloc(5 * sizeof(int*));
  for(int i = 0; i < 5; i++){
    matrix[i] = malloc(4 * sizeof(int));
  }
  matrix[2][3] = 6;
  

}
