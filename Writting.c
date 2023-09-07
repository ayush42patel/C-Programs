#include <stdio.h>
void writing()
{
    printf("Writting in a file\n");
    printf("Code for writing a line without space\n");
    printf("If space given e is performing 1 less input\n");
    FILE *a;
    a=fopen("E:/Fact.txt","w");
    int c,d,e;
    printf("C Value=");
    scanf("%d",&c);
    printf("How many lines?:");
    scanf("%d",&e);
    for (d= 1;d<=e;d++){
        char b[c];
        printf("What you want to write?:");
        scanf("%s",b);
        fprintf(a,b);
        fprintf(a,"\n");
    }
    fclose(a);
}
void writing2()
{
    printf("Writing in a file\n");
    printf("Using fputc\n");
    FILE *a;
    a=fopen("E:/Fact.txt","w");
    int c,d,e;
    printf("C Value=");
    scanf("%d",&c);
    
}
void writing3()
{
    FILE *filePointer ;
    char dataToBeWritten[50]= "GeeksforGeeks-A Computer Science Portal for Geeks";
    filePointer = fopen("Fact.txt", "w") ;
    if ( filePointer == NULL )
    {
        printf( "GfgTest.c file failed to open." ) ;
    }else
    { 
        printf("The file is now opened.\n") ;
        if ( strlen ( dataToBeWritten ) > 0 )
        {
            fputs(dataToBeWritten, filePointer) ;
            fputs("\n", filePointer) ;
        }
    fclose(filePointer) ;
    printf("Data successfully written in file GfgTest.c\n");
    printf("The file is now closed.") ;
    }

}
int main()
{
    writing();
    return 0;
}