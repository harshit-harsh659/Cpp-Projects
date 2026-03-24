#include <stdio.h>

int fact(int a);

int main(){
int _input, _input1, _sum, _inst;
_sum=0;
printf("Enter a number:\n");
scanf("%d", &_input);
_input1=_input;
while (_input!=0){
_inst=_input%10;
_sum=_sum+ fact(_inst);
_input=_input/10;
}
if (_sum==_input1){
printf("The number %d is Strong number.\n", _input1);
}else{
printf("The number %d is not a Strong number.\n", _input1);
}
}

int fact(int a){
int _fact=1;
for (int i=1;i<=a;i++){
_fact*=i;
}
return _fact;
}
