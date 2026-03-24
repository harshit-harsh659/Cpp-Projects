#include<stdio.h>

int main(){
int _input, _input1, _rem;
printf("Enter a number:\n");
scanf("%d", &_input);
_input1=_input;
_rem=_input%2;
if (_rem==0){
printf("The number %d is even number.\n", _input1);
}else{
printf("The number %d is odd number.\n", _input1);
}
}
