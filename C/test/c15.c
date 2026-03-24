#include <stdio.h>

int main(){
int n;
printf("Enter a number n:");
scanf("%d", &n);

FILE *fptr;
fptr=fopen("Odd.txt", "w");



fprintf(fptr, "The odd numbers upto '%d' are: ", n);
for (int i=1;i<=n;i+=2){
fprintf(fptr, "%d\t", i);
}

fclose(fptr);

return 0;
}
