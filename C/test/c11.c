#include <stdio.h>
#include <string.h>

int main(){
char arr[50], a;
int count=0;
printf("Enter a string: ");
fgets( arr, 50, stdin);

printf("Which character do you want to search.");
scanf("%c", &a);  //taking input to search

arr[strcspn(arr, "\n")]='\0';  //removes newline


for (int i=0;arr[i]!=0;i++){
if (arr[i]==a){
count+=1;
}
}
printf("The character %c has appeared %d times.\n", a, count);
return 0;
}
