#include<stdio.h>

void main(){
int a=0, *a1;
float b=0, *b1;
char c='a',  *c1;
double d=0, *d1;
long long e=0, *e1;
a1=&a;
b1=&b;
c1=&c;
d1=&d;
e1=&e;
printf("%u,    %u,    %u,    %u,    %u \n", a1, b1, c1, d1, e1);
a1+=1; b1+=1, c1+=1, d1+=1, e1+=1;
printf("%u,    %u,    %u,    %u,    %u \n", a1, b1, c1, d1, e1);
}
