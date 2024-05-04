#include <stdio.h>
void bubbleSort(int a[], int n){
   int i, j, temp;
   for (i = 0; i < n-1; i++){
      for (j = 0; j < n-i-1; j++){
         if (a[j] > a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
         }
      }
   }
}

int main() {
   int n,i;
   printf("Enter no of element in array:");
   scanf("%d",&n);
   int a[n];
   printf("Elements=");
   for (i = 0; i < n; i++){
      scanf("%d",&a[i]);
   }
   bubbleSort(a, n);
   printf("Sorted array: \n");
   for (int i=0; i < n; i++){
      printf("%d ", a[i]);
   }
   return 0;
}
