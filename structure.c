#include <stdio.h>

// Define the structure for student record
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Function to input student details
void inputStudentDetails(struct Student *student) {
    printf("Enter student name: ");
    scanf("%s", student->name);

    printf("Enter roll number: ");
    scanf("%d", &student->rollNumber);

    printf("Enter marks: ");
    scanf("%f", &student->marks);
}

// Function to write student records to the file
void writeStudentRecords(FILE *filePointer, struct Student *student, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        fprintf(filePointer, "Name: %s\n", student[i].name);
        fprintf(filePointer, "Roll Number: %d\n", student[i].rollNumber);
        fprintf(filePointer, "Marks: %.2f\n\n", student[i].marks);
    }
}

// Function to read and display student records from the file
void readAndDisplayStudentRecords(FILE *filePointer) {
    struct Student student;
    int numRecords = 0;

    printf("\nStudent Records:\n\n");
    while (fscanf(filePointer, "Name: %s\nRoll Number: %d\nMarks: %f\n\n",
                  student.name, &student.rollNumber, &student.marks) == 3) {
        printf("Name: %s\n", student.name);
        printf("Roll Number: %d\n", student.rollNumber);
        printf("Marks: %.2f\n\n", student.marks);
        numRecords++;
    }

    if (numRecords == 0) {
        printf("No student records found in the file.\n");
    } else {
        printf("Total number of student records read: %d\n", numRecords);
    }
}

int main() {
    FILE *filePointer;
    struct Student student[100];
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    if (numStudents > 100) {
        printf("Error: Maximum number of students allowed is 100.\n");
        return 1;
    }

    // Open the file in write mode to store student records
    filePointer = fopen("student_records.txt", "w");

    if (filePointer == NULL) {
        perror("Error opening the file");
        return 1;
    }

    // Input student details and write them to the file
    printf("\nEnter student details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nDetails for student %d:\n", i + 1);
        inputStudentDetails(&student[i]);
    }

    writeStudentRecords(filePointer, student, numStudents);

    // Close the file after writing
    fclose(filePointer);

    // Reopen the file in read mode to read and display student records
    filePointer = fopen("student_records.txt", "r");

    if (filePointer == NULL) {
        perror("Error opening the file");
        return 1;
    }

    readAndDisplayStudentRecords(filePointer);

    // Close the file after reading
    fclose(filePointer);

    return 0;
}
