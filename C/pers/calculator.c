#include <stdio.h>
int _add(int a, int b);
int _sub(int a, int b);
int _mul(int a, int b);
void _div(int a, int b);
long long _fac(int a);
int _pow(int a, int b);
int _abs(int a);
void _piz();

int main(){
int _input, i_sum_1, i_sum_2, i_sub_1, i_sub_2, i_mul_1 ,i_mul_2, i_div_1, i_div_2, i_fact_1, i_pow_1, i_pow_2;
int i_abs_1;
printf("This is my Calculator , so let's try.\nChoose the operation you want to perform:\n");
printf("1.Addition.\n2.Substraction[A-B].\n3.Multiplication.\n4.Division[A divided by B].\n5.Factorial.\n");
printf("6.Power[A^B].\n7.Absolute Value.\n8.PIZZA!\n");
scanf("%d", &_input);
switch (_input){
case 1:
printf("Addition.\nEnter two numbers:\n");
scanf("%d %d", &i_sum_1, &i_sum_2);
printf("The sum of %d and %d is %d.\n", i_sum_1, i_sum_2, _add(i_sum_1, i_sum_2));
break;

case 2:
printf("Substraction.\nEnter two numbers:\n");
scanf("%d %d", &i_sub_1, &i_sub_2);
printf("The difference of %d and %d is %d.\n", i_sub_1, i_sub_2, _sub(i_sub_1, i_sub_2));
break;

case 3:
printf("Multiplication.\nEnter two numbers:\n");
scanf("%d %d", &i_mul_1, &i_mul_2);
printf("The product of %d and %d is %d.\n", i_mul_1, i_mul_2, _mul(i_mul_1, i_mul_2));
break;

case 4:
printf("Division.\nEnter two numbers:\n");
scanf("%d %d", &i_div_1, &i_div_2);
_div(i_div_1, i_div_2);
break;

case 5:
printf("Factorial.\nEnter a number:\n");
scanf("%d", &i_fact_1);
printf("The factorial of %d is %lld\n", i_fact_1, _fac(i_fact_1));
break;

case 6:
printf("Power.\nEnter two numbers:\n");
scanf("%d %d", &i_pow_1, &i_pow_2);
printf("The value of %d^%d is %d\n", i_pow_1, i_pow_2, _pow(i_pow_1, i_pow_2));
break;

case 7:
printf("Absolute Value\nEnter a number:\n");
scanf("%d", &i_abs_1);
printf("The absolute value of %d is %d.\n", i_abs_1, _abs(i_abs_1));
break;

case 8:
_piz();
break;
}

return 0;
}

int _add(int a, int b){
return a+b;
}

int _sub(int a, int b){
return a-b;
}

int _mul(int a, int b){
return a*b;
}

void _div(int a, int b){
int _quo, _rem;
_quo= a/b;
_rem=a%b;
printf("The quotient is %d and the remainder is %d \n", _quo, _rem);
}

long long _fac(int a){
long long _fact=1;
for (int i=1;i<=a;i++){
_fact= _fact*i;
}
return _fact;
}

int _pow(int a, int b){
int _exp=1;
for (int j=1;j<=b;j++){
_exp=_exp*a;
}
return _exp;
}

int _abs(int a){
if (a>0){
a=a;
}
else{
a=-a;
}
return a;
}

void _piz(){
printf("Yaha Pizza Kaha se aayega? \n");
}
