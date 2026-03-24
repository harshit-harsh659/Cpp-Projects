#include<stdio.h>
#include<math.h>

int main(){
int _num, _reverse, _num1, _digit, rev_dig, _inst;
_reverse=0;
printf("Enter a number:\n");
scanf("%d", &_num);
_num1=_num;
_digit=(int)log10(_num);
while (_num!=0){
_inst=_num%10;
_reverse=_reverse*10+_inst;
_num=_num/10;
}
printf("The reverse of %d is: ", _num1);
rev_dig=(int)log10(_reverse);
if (rev_dig!=_digit){
while (rev_dig!=_digit){
printf("0");
rev_dig++;
}
}
printf("%d\n", _reverse);
}
