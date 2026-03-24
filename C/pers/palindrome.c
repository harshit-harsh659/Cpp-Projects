#include<stdio.h>
#include<math.h>

int main(){
int _num, _reverse, _num1, _digit, _inst;
_reverse=0;
printf("Enter a number:(Try not to enter 0 in end or start)\n");
scanf("%d", &_num);
_num1=_num;
_digit=(int)log10(_num);
while (_num!=0){
_inst=_num%10;
_reverse=_reverse*10+_inst;
_num=_num/10;
}
if (_reverse==_num1){
printf("The number %d is palindrome.\n", _num1);
}else{
printf("The number %d is not palindrome.\n", _num1);
}
}
