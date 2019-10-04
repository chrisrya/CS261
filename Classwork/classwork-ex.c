#include <stdio.h>

  void make_it_32(int* it){
    it = 32;
  }

 int main(int argc, char const *argv[]) {
  int n = 10;
  int* n_ptr = &n;

  printf("==n: %d\n", n);
  printf("==n_ptr: %p\n", n_ptr);
  printf("== &n: %p\n", &n);
  printf("== *n_ptr: %p\n", *n_ptr);

  *n_ptr = 8;
  printf("==n: %d\n", n);
  printf("==n_ptr: %p\n", n_ptr);
  printf("== &n: %p\n", &n);
  printf("== *n_ptr: %p\n", *n_ptr);

  make_it_32(n);
  printf("==n: %d\n", n);
  printf("==n_ptr: %p\n", n_ptr);
  printf("== &n: %p\n", &n);
  printf("== *n_ptr: %p\n", *n_ptr);


  return 0;
}
