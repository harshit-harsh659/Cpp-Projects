#include <stdio.h>

int main(){
int n, _dig, _sum;
printf("Enter a number n: ");
scanf("%d", &n);

for (int i=1;i<=n;i++){
_sum=0;
for (int j=1;j<i;j++){
if (i%j==0){
_sum+=j;
}
}
if (_sum==i){
printf("%d \t", i);
}
}
printf("\n");
return 0;
}
