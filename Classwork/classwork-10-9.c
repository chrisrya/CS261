#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  char* str = malloc(64* sizeof(char));
  const char* name = "Leia Organa";

  // name[0] ='l'; this will not work, as you cannot edit a string like this

  printf("== strlen(name): %lu\n", strlen(name));
  int n = strlen(name);
  char* copy = malloc((n+1) * sizeof(char));
  strncopy(copy, name, n+ 1);
  printf("== copy: %s\n",copy);
  copy[0] = 'l';
  printf("== copy: %s\n",copy);

  // snprintf(str, 64, "%s %d %f", s.name, s.id, s.gpa); - limits how many characters can be printed

  void sort_two_things(void ** two_things, int (*cmp)(void* a, void* b)){
    if(cmp(two_things[0], two_things[1]) != 0){
      void* tmp = two_things[0];
      two_things[0] = two_things[1];
      two_things[1] = tmp;
    }
  }

  int i, i1 = 16. i2 = 8;


  sort_two_things((void**)int_ptrs, compare_ints);




}
