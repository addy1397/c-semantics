#include<stdlib.h>
#include<stdio.h>

void bar() {}

void foo() {
  fprintf(stderr, "%s", "Hello World!\n");
}

int main() {
  at_quick_exit(foo);
  quick_exit(0);
}