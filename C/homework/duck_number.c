#include<stdio.h>

int main(){
int _input, _found, _input1, _inst;
_found=0;
printf("Enter a number:\n");
scanf("%d", &_input);
_input1=_input;
while (_input!=0){
_inst=_input%10;
_input=_input/10;
if (_inst==0){
_found=1;
break;
}
}
if (_found==1){
printf("The number %d is a Duck-Number.\n", _input1);
}else{
printf("The number %d is not a Duck-Number.\n", _input1);
}return 0;
} 
