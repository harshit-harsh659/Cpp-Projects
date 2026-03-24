#include <stdio.h>
#include <stdlib.h>
#include "test.h"


int main(){
system("clear");
//FILE *fp=fopen("test.txt", "w+");
//fprintf(fp, "#define rec_area (a, b) (a*b)\n#define peri (r) (2*3.14*r)");
float a = peri (5);
float b=rec_area(10, 20);
printf("%f", a);
printf("\n%f", b);
//fclose(fp);
printf("\n");
return 0;
}
