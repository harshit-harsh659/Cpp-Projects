#include <stdio.h>
#include<string.h>


//declaration of data types
typedef struct complex{
int real;
int imag;
} com;

int res_real, res_imag;


//declaration of fucntions
void _add(com C[], int c1, int c2);
void _sub(com C[], int c1, int c2);
void _mul(com C[], int c1, int c2);


//printing func for complex numbers
void _print(com C[], int n);

//main function
int main(){
int n, command, c1, c2;

printf("How many complex numbers do you want to store?\n");
scanf("%d", &n);

com C[n];

//taking inputs
for (int j=0;j<n;j++){
printf("Please enter real part of complex %d: ", j+1);
scanf("%d", &C[j].real);
printf("Please enter imaginary part of complex %d: ", j+1);
scanf("%d", &C[j].imag);
printf("\n");
}


//making interactive 
printf("What do you want to do with stored complex numbers?\n(Please enter the corresponding number.)\n1.Add\n2.Substract\n3.Multiply\n4.Print complex number at nth index\n5.Exit this menu");
scanf("%d", &command);
switch(command){

case 1:
printf("Which 2 complex numbers do you want to add?(xth,yth): ");
scanf("%d,%d", &c1, &c2);
_add(C, c1-1, c2-1);
break;

case 2:
printf("Which 2 complex numbers do you want to substract?(xth,yth): ");
scanf("%d, %d", &c1, &c2);
_sub(C, c1-1, c2-1);
break;

case 3:
printf("Which 2 complex numbers do you want to multiply?(xth,yth): ");
scanf("%d, %d", &c1, &c2);
_mul(C, c1-1, c2-1);
break;

case 4:printf("Which complex number index do you to print? ");
scanf("%d", &c1);
_print(C, c1-1);

case 5:
printf("Thank You!\n");
break;
}

return 0;
}


// defining function
void _print(com C[], int n){
printf("\nThe complex number is %d + %di.\n", C[n].real, C[n].imag);
}


void _add(com C[], int c1, int c2){
res_real=C[c1].real+C[c2].real;
res_imag=C[c1].imag+C[c2].imag;
printf("\nThe sum of the two complexes is %d + (%d)i\n", res_real, res_imag);
}

void _sub(com C[], int c1, int c2){
res_real=C[c1].real-C[c2].real;
res_imag=C[c1].imag-C[c2].imag;
printf("\nThe difference of the two complexes is %d + (%d)i\n", res_real, res_imag);
}

void _mul(com C[], int c1, int c2){
res_real=(C[c1].real*C[c2].real)-(C[c1].imag*C[c2].imag);
res_imag=(C[c1].imag*C[c2].real)+(C[c1].real*C[c2].imag);
printf("\nThe product of the two complexes is %d + %di\n", res_real, res_imag);
}


