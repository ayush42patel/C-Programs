#include <stdio.h>
int main() {
    FILE *a,*sourceFile, *destinationFile;
    char ch,m[1000];

	a=fopen("E://source.txt","w");
	printf("Enter string:");
	scanf("%s",m);
	fprintf(a,m);
	fclose(a);
    // Open the source file in read mode
    sourceFile = fopen("E://source.txt", "r");

    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen("E://destination.txt", "w");

    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 1;
    }

    // Copy data from source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
