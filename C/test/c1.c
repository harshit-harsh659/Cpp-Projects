#include <stdio.h>

void work(float a, float b, float *sum , float *product, float *average);

void main(){
float num1, num2, sum, product, average;
printf("Enter 2 number(seperated by space):");
scanf("%f %f", &num1, &num2);
work(num1, num2, &sum, &product, &average);
printf("\nThe average is:%f\n", average);
}

void work(float a, float b, float *sum, float *product, float *average){
*sum=a+b;
*product=a*b;
*average=(a+b)/2;
}
