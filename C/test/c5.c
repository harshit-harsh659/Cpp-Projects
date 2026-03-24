#include <stdio.h>

int fibo(int n);


int main(){
int n;
printf("How many fibonacci series do you want?\n");
scanf("%d", &n);

int arr[n];
printf("Your sequence:\t");
for (int i=1;i<n;i++){
arr[i]=fibo(i);
if (i==n-1){
printf("%d.\n", arr[i]);
}
else{
printf("%d\t", arr[i]);
}
}
return 0;
}


int fibo(int n){
int result;
if (n==1){
result=0;
}else if (n==2){
result=1;
}else{
result=(fibo(n-1)+fibo(n-2));
}
return result;
}
