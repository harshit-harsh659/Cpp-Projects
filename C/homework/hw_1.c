#include <stdio.h>
#include <math.h>

int main(){
int _num, _digit, _inst, _div, _counter;
_counter=0;
printf("This program converts digit notation to name notation.\nEnter the number.\n");
scanf("%d", &_num);
_digit=(int)log10(_num);
_div=pow(10, _digit);
while (_num!=0){
_inst=_num/_div;
_num=_num%_div;
_div=_div/10;
_counter+=1;
switch (_inst){
case 0: printf("zero ");
break;
case 1: printf("one ");
break;
case 2: printf("two ");
break;
case 3: printf("three ");
break;
case 4: printf("four ");
break;
case 5: printf("five ");
break;
case 6: printf("six ");
break;
case 7: printf("seven ");
break;
case 8: printf("eight ");
break;
case 9: printf("nine ");
}
}
int _rem;
_rem=_digit+1-_counter;
for (int j=1;j<=_rem;j++){
printf("zero ");
}
}
