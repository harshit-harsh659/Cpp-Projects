#include <stdio.h>

int main(){
int _input, _digit, _num, _sum, _num1;
_sum=0;
printf("Enter a number\n");
scanf("%d", &_num);
_num1=_num;
for (int i=0; _num!=0; i++){
_digit=_num%10;
_sum+=_digit;
_num=_num/10;
}
printf("The sum of the digits of the number %d is %d.\n", _num1, _sum);
return 0;
} 
