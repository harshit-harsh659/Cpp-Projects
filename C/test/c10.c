#include <stdio.h>
#include <string.h>


int countvow(char *arr);


int main(){
char arr[50];

printf("Please enter the string to check for no. of vowlels: ");
fgets(arr, 50, stdin);//stores the string

arr[strcspn(arr, "\n")]='\0';//it removes the \n that got input while pressing enter and replaces with '\0'

printf("The total number of vowels in the string: %s is %d.\n", arr, countvow(arr));//prints the count directly

return 0;
}


int countvow(char *arr){
int count=0;
for (int i=0;arr[i]!=0;i++){
if (arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'){
count+=1;
}
}
return count;
}

