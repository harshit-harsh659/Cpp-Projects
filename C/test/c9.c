#include <stdio.h>
#include <string.h>

int main(){
int a, b;
char arr[20];
printf("Enter a string:");
fgets(arr, 20, stdin);

printf("\nEnter first and last index:");
scanf("%d %d", &a, &b);

printf("\n"); // adds a gap of 1line

for (int i=a-1;i<b;i++){
printf("%c", arr[i]);//prints sequentially
}
printf("\n"); // looks clean
return 0;
}
