#include <stdio.h>
#include <string.h>
int main(){
    struct employee{
        char name[10];
        int age;
        float salary;
    };
    struct employee d1,d2;
    printf("Enter name,age,salary:");
    scanf("%s%d%f",&d1.name,&d1.age,&d1.salary);
    strcpy(d2.name,d1.name);
    d2.age=d1.age;
    d2.salary=d1.salary;
    printf("Elements:\n");
    printf("Name=%s\tAge=%d\tSalary=%.2f\t\n",d1.name,d1.age,d1.salary);
    printf("Copying.....\n");
    printf("Name=%s\tAge=%d\tSalary=%.2f\t\n",d2.name,d2.age,d2.salary);
    return 0;
}