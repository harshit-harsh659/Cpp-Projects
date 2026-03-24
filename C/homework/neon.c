#include <stdio.h>

int main(){
int n, _sq, _sum, _dig;
printf("Enter the number to check: ");
scanf("%d", &n);
_sum=0;

_sq=n*n;

while (_sq!=0){
_dig=_sq%10;
_sum+=_dig;
_sq=_sq/10;
}
 
if (_sum==n){
printf("\n The number %d is neon number.\n", n);
}
else{
printf("The number %d is not a neon number.\n", n);
}
return 0;
}
