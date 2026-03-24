#include <stdio.h>


int main(){

int n;

printf("How many tables do you want?\n");
scanf("%d", &n);
printf("\n\n");
int arr[n][10];

for (int i=0;i<n;i++){ // for arr[x]
for (int j=1;j<11;j++){ // for arr[x][y]
arr[i][j]=(i+1)*j; //for storing the value
printf("%d\t", arr[i][j]); //for printing the stored value
}
printf("\n\n");
}
return 0;
}
