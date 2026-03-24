#include <stdio.h>
#include <string.h>

void sort(int arr[], int n);


int main(){
int n;
char command[5];
printf("How many elements do you want to swap?");
scanf("%d", &n);

int arr[n];//making array

//taking inputs
for (int i=0;i<n;i++){
printf("\nElement %d value: ", i+1);
scanf("%d", &arr[i]);
}
printf("Do you want to sort?");
scanf("%s", command);

if (strcmp(command, "yes")==0){
sort(arr, n);
}
else {
printf("Thank You!\n");
}
}


//defining function
void sort(int arr[], int n){
int temp;
for (int i=1;i<n;i++){
int j=i-1;
while (j>=0 && arr[j]>arr[j+1]){
if (arr[j+1]<arr[j]){
temp=arr[j+1];
arr[j+1]=arr[j];
arr[j]=temp;
}
j--;
}
}

for (int k=0;k<n;k++){
printf("%d\t", arr[k]);
}
printf("\n");
}
