#include<stdio.h>

int main(){
int _input, _input1, _sum;
_sum=0;
printf("Enter Nth number: ");
scanf("%d", &_input);
_input1=_input;
for (int i=0; i<=_input; i++){
_sum+=i;
}
printf("The sum of first %d numbers is: %d.\n", _input1, _sum);
return 0;
}
