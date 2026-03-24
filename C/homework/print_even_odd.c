#include<stdio.h>

int main(){
int _count, i, _rem, n;

printf("Enter the nth number");
scanf("%d", &n);

_count=0;
printf("The even numbers are:");
for(i=1;i<=n;i++){
if (i%2==0){
_count+=1;
printf(" %d,", i);
}
}
printf(".\n Total %d numbers.\n", _count);

_count=0;
printf("The odd numbers are:");
for(i=1;i<=n;i++){
if (i%2!=0){
_count+=1;
printf(" %d,", i);
}
}
printf(". \n Total %d numbers.\n", _count);
return 0;
}
