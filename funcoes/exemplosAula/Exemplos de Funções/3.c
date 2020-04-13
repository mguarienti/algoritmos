#include<stdio.h>
void funcao () {
  printf("1");
  return;
  }
void func () {
  return;
  printf("2"); /* Warning: código inatingível!! */
  }
main() {
  printf ("3");
  func();
  printf ("4");
  funcao();
  printf ("5");
  } 
