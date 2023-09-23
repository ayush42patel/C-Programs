#include <stdio.h>
int sums(int nums[],int numsize, int target){
    for (int i = 0; i <numsize-1; i++){
        for (int j = i+1; j <numsize; j++){
            if(nums[i]+nums[j]==target){
                printf("Value:[%d,%d],",nums[i],nums[j]);
                printf("Indices:[%d,%d]",i,j);
                return 0;
            }
        }
    }
    printf("No Such things exist");
}
int main(){
    int numsize,target;
    printf("Enter size of array:");
    scanf("%d",&numsize);
    int nums[numsize];
    printf("Enter elements:");
    for(int i=0;i<numsize;i++){
        scanf("%d",&nums[i]);
    }
    printf("Sum you want?:");
    scanf("%d",&target);
    sums(nums,numsize,target);
    return 0;
}