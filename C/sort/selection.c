#include<stdio.h>
#include<string.h>


//declaring sorting function
void _sort(int arr[], int n);

int main(){
int a;
char command[5];
printf("How many digits do you want to sort?\n");
scanf("%d", &a);


//making an array of size a
int arr[a];

// taking inputs
for (int i=0;i<a;i++){
printf("Enter value at index %d: ", i+1);
scanf("%d", &arr[i]);
printf("\n");
}

//interactive
printf("Do you want to sort(yes/no)?\n");
scanf("%s", command);


//checking command
if (strcmp(command, "yes")==0){
printf("The sorted array is: ");
_sort(arr, a);
}
else{
printf("Thank you!");
}

printf("\n");
return 0;
}


//defining  sorting logic
void _sort(int arr[], int a){
int temp,index;
for (int i=0;i<a;i++){
index=i; //reseting the minimum index for each iteration
for (int p=i;p<a;p++){
if (arr[p]<arr[index]){ //checks for maximum value
index=p; //taing min index
}
}
temp=arr[i];
arr[i]=arr[index];
arr[index]=temp;
}
for (int k=0;k<a;k++){
printf("%d\t", arr[k]); 
}
}
