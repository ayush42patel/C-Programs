#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

void initialize(int arr[]) {
    for (int i = 0; i < MAX_SIZE; i++) {
        arr[i] = -1;
    }
}

void insert(int arr[], int key, int index) {
    if (arr[index] == -1) {
        arr[index] = key;
        return;
    }
    if (key < arr[index]) {
        insert(arr, key, 2 * index + 1);
    } else {
        insert(arr, key, 2 * index + 2);
    }
}

void preOrderTraversal(int arr[], int index) {
    if (index >= 0 && index < MAX_SIZE && arr[index] != -1) {
        printf("%d ", arr[index]);
        preOrderTraversal(arr, 2 * index + 1);
        preOrderTraversal(arr, 2 * index + 2);
    }
}

void inOrderTraversal(int arr[], int index) {
    if (index >= 0 && index < MAX_SIZE && arr[index] != -1) {
        inOrderTraversal(arr, 2 * index + 1);
        printf("%d ", arr[index]);
        inOrderTraversal(arr, 2 * index + 2);
    }
}

void postOrderTraversal(int arr[], int index) {
    if (index >= 0 && index < MAX_SIZE && arr[index] != -1) {
        postOrderTraversal(arr, 2 * index + 1); // Left subtree
        postOrderTraversal(arr, 2 * index + 2); // Right subtree
        printf("%d ", arr[index]); // Root
    }
}

int readArray(int arr[]) {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    return size;
}

void insertArray(int arr[], int size, int bstArray[]) {
    for (int i = 0; i < size; i++) {
        insert(bstArray, arr[i], 0);
    }
}

int main() {
    int bstArray[MAX_SIZE];
    initialize(bstArray);
    int numElements;
    printf("Enter the number of elements to insert: ");
    scanf("%d", &numElements);
    printf("Enter %d elements:\n", numElements);
    for (int i = 0; i < numElements; i++) {
        int element;
        scanf("%d", &element);
        insert(bstArray, element, 0);
    }
    printf("Pre-order traversal: ");
    preOrderTraversal(bstArray, 0);
    printf("\n");
    printf("In-order traversal: ");
    inOrderTraversal(bstArray, 0);
    printf("\n");
    printf("Post-order traversal: ");
    postOrderTraversal(bstArray, 0);
    printf("\n");
    return 0;
}
