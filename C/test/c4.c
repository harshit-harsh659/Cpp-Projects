#include <stdio.h>

int main(){
int arr[5], arr2[5];
for (int i=0; i<5;i++){
printf("\nEnter %d index value:", i+1);
scanf("%d", &arr[i]);
}

for (int j=0;j<5;j++){
arr2[j]=arr[4-j];
}
printf("The reverse order is: ");

for (int k=0; k<5;k++){
if (k!=4){
printf("%d, ", arr2[k]);
}else{
printf("%d.", arr2[k]);
}
}
printf("\n");
return 0;
}
