#include<stdio.h>
#include<string.h>

int countlen(char *arr);
void salting(char *arr);
void unsalt(char *arr);

int main(){
int a, a1;

char arr[30];  //making array

printf("Enter the password:"); // getting input
fgets(arr, 30, stdin);

salting(arr); //salts the password
unsalt(arr); //unsalts it (we needed to start from here but its ok)
printf("\n");
return 0;
}

void salting(char *arr){
char arrsalt[]="123";
strcat(arr, arrsalt);
}


int countlen(char *arr){
int count=0;
for (int i=0;arr[i]!='\0';i++){
count++;
}
return count-1;
}


void unsalt(char *arr){
int b=countlen(arr);
for (int m=0;m<b-3;m++){
printf("%c", arr[m]);
}
}
