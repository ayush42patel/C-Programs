#include <stdio.h>
int main()
{
  int myage;
  int vote_age;
  vote_age=18;
  printf("Age=");
  scanf("%d",myage);
  if(myage>=vote_age){
    printf("Can vote");
  }else{
    printf("Cannot vote");
  }
  return 0;
}
