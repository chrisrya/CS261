#ifndef __STUDENT_H
#define __STUDENT_H

struct student {
  char* name;
  int id;
  float gpa;
};

int int main(int argc, char const *argv[]) {

  struct student s = {.name = "Luke SKywalker", .gpa = 3.75};

  s.id = 933111111;
  printf("\n%s %d %f\n" s.name, s.id, s.gpa);

  return 0;
}








#endif
