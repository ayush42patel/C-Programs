#include <stdio.h>
#define M 50
int main(){
    char fname[M], mname[M], lname[M]; /* person’s name */
    printf("Enter fullname (first middle last): ");
    scanf("%s %s %s", fname, mname, lname);

    printf("Abbreviated name: ");
    printf("%c. %c. %s\n", fname[0], mname[0], lname);
    return 0;
}