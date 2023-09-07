#include <stdio.h>
void myname(char name[]) {
  printf("Hello %s\n", name);
}

void myage(int age){
  printf("you are %d years old\n",age);
}
int main() 
{
  myname("Ayush");
  myage(18);
  return 0;
}