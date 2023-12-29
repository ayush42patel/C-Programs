#include <stdio.h>
void hanoi(int n, char rodA, char rodC, char rodB)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c",rodA ,rodC );
		return;
	}
	hanoi(n-1, rodA, rodB, rodC);
	printf("\n Move disk %d from rod %c to rod %c", n, rodA, rodC);
	hanoi(n-1, rodB, rodC,rodA);
}

void main(){
    int n;
    char A='A',B='B',C='C';
    printf("No of disk:");
    scanf("%d",&n);
    printf("\n\nTower of Hanoi with %d disk:",n);
    hanoi(n,'A','C','B');
    printf("\n");
}
// int main()
// {
// 	int no_of_disks ;
// 	printf("Enter number of disks: ");
// 	scanf("%d", &no_of_disks);
// 	toH(no_of_disks, 'A','C','B'); 
// 	return 0;
// }