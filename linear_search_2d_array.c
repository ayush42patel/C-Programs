#include <stdio.h>
void linearsearch(int key,int r, int c) {
    int a[r][c];
    int i,j;
    printf("Enter Elements:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int found = 0;
    int row_index = -1, col_index = -1;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == key) {
                found = 1;
                row_index = i;
                col_index = j;
                printf("Element %d found",key);
            }
        }
    }
}
int main(){
    int r,c;
    printf("Enter Row:");
    scanf("%d",&r);
    printf("Enter Column:");
    scanf("%d",&c);
    int key;
    printf("Enter the element you want to search:");
    scanf("%d",&key);
    linearsearch(key,r,c);
}