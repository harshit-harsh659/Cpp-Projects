#include <stdio.h>

int main(){
int arr[10]={5,4,0,0,4,5,0,9,2,0};
int temp;
for (int i=0;i<10;i++){
if (arr[i]==0){
for (int j=i+1;j<10;j++){
temp=arr[j+1];
arr[j+1]=arr[i];
arr[i]=temp;
}
}
}
for (int k=0;k<10;k++){
printf("%d\t", arr[k]);
}
}
