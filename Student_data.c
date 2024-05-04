#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Max_Students 1000
struct Student{
    int rollNo;
    char name[50];
    char department[50];
    char course[50];
    int yearofjoining;
    int yearofstudying;
};

void yearofjoining(struct Student students[], int numStudents, int targetYear){
    printf("Students who joined in %d:\n",targetYear);
    for(int i=0; i<numStudents; i++){
        if(students[i].yearofjoining==targetYear){
            printf("Student Data for the year %d:\n",targetYear);
            printf("Name: %s\n",students[i].name);
            printf("Roll No: %d\n",students[i].rollNo);
            printf("Department: %s\n",students[i].department);
            printf("Course: %s\n",students[i].course);
            printf("Year of joining: %d\n",students[i].yearofjoining);
            printf("Year of studying: %d\n",students[i].yearofstudying);
            return ;
        }
    }
    printf("Students with %d year of joining not found.\n\n",targetYear);
}

void rollno(struct Student students[],int numstudents,int targetRollNo){
    for(int i=0;i<numstudents;i++){
        if(students[i].rollNo==targetRollNo){
            printf("Student Data for Roll No %d:\n",targetRollNo);
            printf("Name: %s\n",students[i].name);
            printf("Roll No: %d\n",students[i].rollNo);
            printf("Department: %s\n",students[i].department);
            printf("Course: %s\n",students[i].course);
            printf("Year of joining: %d\n",students[i].yearofjoining);
            printf("Year of studying: %d\n",students[i].yearofstudying);
            return ;
        }
    }
    printf("Students with Roll No %d not found.\n\n",targetRollNo);
}

void yos(struct Student students[],int numstudents,int targetyos){
    printf("Student Data for the year of studying %d:\n",targetyos);
    for (int i=0; i<numstudents ; i++){
        if(students[i].yearofstudying==targetyos){       
            printf("Name: %s\n",students[i].name);
            printf("Roll No: %d\n",students[i].rollNo);
            printf("Department: %s\n",students[i].department);
            printf("Course: %s\n",students[i].course);
            printf("Year of joining: %d\n",students[i].yearofjoining);
            printf("Year of studying: %d\n",students[i].yearofstudying);
            return ;
        }
    }
    printf("Students with %d year of studying not found.\n\n",targetyos);
}

void department(struct Student students[],int numstudents,char *targetdepart){
    printf("Students in the %s department:\n",targetdepart);
    for(int i=0;i<numstudents;i++){
        if(strcmp(students[i].department,targetdepart)==0){
            printf("Name: %s\n",students[i].name);
            printf("Roll No: %d\n",students[i].rollNo);
            printf("Department: %s\n",students[i].department);
            printf("Course: %s\n",students[i].course);
            printf("Year of joining: %d\n",students[i].yearofjoining);
            printf("Year of studying: %d\n",students[i].yearofstudying);
            return ;
        }
    }
    printf("Students with %s department not found.\n\n",targetdepart);
}

void course(struct Student students[],int numstudents,char *targetcourse){
    printf("Students in the %s course:\n",targetcourse);
    for(int i=0;i<numstudents;i++){
        if(strcmp(students[i].course,targetcourse)==0){
            printf("Name: %s\n",students[i].name);
            printf("Roll No: %d\n",students[i].rollNo);
            printf("Department: %s\n",students[i].department);
            printf("Course: %s\n",students[i].course);
            printf("Year of joining: %d\n",students[i].yearofjoining);
            printf("Year of studying: %d\n",students[i].yearofstudying);
            return ;
        }
    }
    printf("Students with %s course not found.\n\n",targetcourse);
}

int main(){
    struct Student students[Max_Students];
    int numstudents;
    printf("Enter the no of students:");
    scanf("%d",&numstudents);
    for(int i=0;i<numstudents;i++){
        printf("Enter data for students #%d:\n",i+1);
        students[i].rollNo=i+1;
        printf("Name:");
        scanf("%s",students[i].name);
        printf("Department:");
        scanf("%s",students[i].department);
        printf("Course:");
        scanf("%s",students[i].course);
        printf("Years of joining:");
        scanf("%d",&students[i].yearofjoining);
        printf("Year of studying:");
        scanf("%d",&students[i].yearofstudying);
    }
    int m,u;
    printf("How many times:");
    scanf("%d",&u);
    for(int j=0;j<=u;j++){
        printf("|~~~~~~~~~~~~~~Student Filter Program~~~~~~~~~~~~~~~|\n");
        printf("|                                                   |\n");
        printf("|                 1.Year ofjoining                  |\n");
        printf("|                 2.Roll NO                         |\n");
        printf("|                 3.Year of studying                |\n");
        printf("|                 4.Department                      |\n");
        printf("|                 5.Course                          |\n");
        printf("|                                                   |\n");
        printf("|~~~~~~~~~~~~~~~~~~Exit~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("Select Choice:");
        scanf("%d",&m);
        if(m==1){
            int targetYear;
            printf("Enter the year to find students who joined in that year:");
            scanf("%d",&targetYear);
            yearofjoining(students,numstudents,targetYear);
        }else if(m==2){
            int targetRollNo;
            printf("Enter the roll no to find the student data:");
            scanf("%d",&targetRollNo);
            rollno(students,numstudents,targetRollNo);
        }else if(m==3){
            int targetyos;
            printf("Enter the year of studying who you want to search:");
            scanf("%d",&targetyos);
            yos(students,numstudents,targetyos);
        }else if(m==4){
            char targetdepart[50];
            printf("Enter the department you want to search:");
            scanf("%s",&targetdepart);
            department(students,numstudents,targetdepart);
        }else if(m==5){
            char targetcourse[50];
            printf("Enter Course you want to search:");
            scanf("%s",targetcourse);
            course(students,numstudents,targetcourse);
        }else{
            printf("Invalid Choice please check(1-5)");
            exit(0);
        }
    }
    return 0;
}