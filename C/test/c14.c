#include <stdio.h>
#include <string.h>


typedef struct vectors{
int x_com;
int y_com;
} v;

int main(){
int a1, a2, b1, b2, sum1, sum2; // making variables for comp


//taking inputs
printf("Enter vector 1 (x,y): ");
scanf("%d,%d", &a1, &a2);

printf("\nEnter vector 2 (x,y): ");
scanf("%d,%d", &b1, &b2);


//asssing the inputs
v vec[2]={{a1,a2}, {b1, b2}};


//finding sum
sum1=(vec[0].x_com)+(vec[1].x_com);
sum2=(vec[0].y_com)+(vec[1].y_com);


//printing sum
printf("\nThe sum of the vectors is:%di + %dj", sum1, sum2);

printf("\n");

return 0;
}
