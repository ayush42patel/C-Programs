#include <stdio.h>
void doublequotes()
{
    char txt[] = "We are the so-called \"Vikings\" from the north.";
    printf(txt);
}
void invertedcomma()
{
    char txt1[] = "It\'s alright.";
    printf(txt1);
}
void backslash()
{
    char txt2[] = "The character \\ is called backslash.";
    printf(txt2);
}
int main()
{
    doublequotes();
    invertedcomma();
    backslash();
    return 0;
}
