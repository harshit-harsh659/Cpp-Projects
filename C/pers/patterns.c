 #include <stdio.h>
 
int _pr(int a);
void _prime(int a);

int _arm(int a);
void _armstrong(int a); 

void _fibo(int a);
void _fibonacci(int a);

int _per_num(int a);
void _perfect_number(int a);


int _pal(int a);
void _palindrome(int a);


int _pow(int a, int b);



int main(){
int _input,_input1;
printf("Hello this is just sequence printing program.\nChoose a sequence:\n1.Prime Number.\n2.Armstrong.\n3.Fibonacci.\n4.Perfect Number.\n");
printf("5.Palindrome\n");
scanf("%d", &_input);
if (_input==1){
printf("Prime Sequence.\nEnter how many numbers you want.\n");
scanf("%d", &_input1);
_prime(_input1);
printf("\n");
}else if (_input==2){
printf("Armstrong Sequence.\nEnter how many numbers you want.\n");
scanf("%d", &_input1);
_armstrong(_input1);
printf("\n");
}else if (_input==3){
printf("Fibonacci Sequence.\nEnter how many numbers you want.\n");
scanf("%d", &_input1);
_fibonacci(_input1);
printf("\n");
}else if (_input==4){
printf("Perfect Number Sequence.\nEnter how many numbers you want.\n");
scanf("%d", &_input1);
_perfect_number(_input1);
printf("\n");
}else if (_input==5){
printf("Palindrome Sequence.\nEnter how many numbers you want.\n");
scanf("%d", &_input1);
_palindrome(_input1);
printf("\n");
}
}



int _pr(int a){
int _true_pr=0;
if (a<2){
_true_pr=0;
}else if (a==2){
_true_pr=1;
}else if (a>2){
for (int i=2;i<a;i++){
if (a%i==0){
_true_pr=0;
break;
}else{
_true_pr=1;
}
}
}
return _true_pr;
}

void _prime(int a){
int count_pr=1;
int b=2;
printf("The first %d Prime numbers are ", a);
while (count_pr<=a){
if  (_pr(b)){
printf("%d, ",b);
count_pr+=1;
}
b+=1;
}
}


int _arm(int a){
int _copy=a;
int _copy1=a;
int _digits=0;
int _sum=0;
int _true_arm=0;
while (_copy>0){
_digits+=1;
_copy=_copy/10;
}
while (_copy1>0){
_sum=_sum+_pow(_copy1%10, _digits);
_copy1=_copy1/10;
}
if (_sum==a){
_true_arm=1;
}else{
_true_arm=0;
}
return _true_arm; 
}

void _armstrong(int a){
int count_arm=1;
int c=0;
printf("The first %d Armstrong numbers are ", a);
while (count_arm<=a){
if  (_arm(c)){
printf("%d, ",c);
count_arm+=1;
}
c+=1;
}
}


void _fibo(int a){
int _fib1,_fib2,_res,_iter_fibo;
_fib1=0;
_fib2=1;
_res=0;
_iter_fibo=1;
while (_iter_fibo<=a){
if (_iter_fibo==1){
_res=0;
}else if (_iter_fibo==2){
_res=1;
}else if(_iter_fibo>2){
_res=_fib1+_fib2;
_fib1=_fib2;
_fib2=_res;
}
printf("%d ,", _res);
_iter_fibo+=1;
}
}

void _fibonacci(int a){
int count_fib=1;
int f=a;
_fibo(f);
}


int _per_num(int a){
int _sum_per,_true_per_num;
_sum_per=0;
_true_per_num=0;
for (int i=1;i<=a/2;i++){
if (a%i==0){
_sum_per+=i;
}
}
if (_sum_per==a){
_true_per_num=1;
}
return _true_per_num;
}

void _perfect_number(int a){
int count_per_num=1;
int pn=1;
printf("The first %d Perfect numbers are ", a);
while (count_per_num<=a){
if  (_per_num(pn)){
printf("%d, ", pn);
count_per_num+=1;
}
pn+=1;
}
}


int _pal(int a){
int _ori, _dig, _rev;
_ori=a;
_dig=0;
_rev=0;
while (_ori>0){
_dig=_ori%10;
_rev=_rev*10+_dig;
_ori=_ori/10;
}
if (_rev==a){
return 1;
}else{
return 0;
}
}

void _palindrome(int a){
int count_pal=1;
int pa=1;
printf("The first %d Palindrome numbers are ", a);
while (count_pal<=a){
if  (_pal(pa)){
printf("%d, ",pa);
count_pal+=1;
}
pa+=1;
}
}

int _pow(int a, int b){
int _result=1;
for (int i=1;i<=b;i++){
_result*=a;
}
return _result;
}
