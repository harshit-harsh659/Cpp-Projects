#include<stdio.h>

int _odd(int n);

int main(){
int count=0;
int arr[10],arr2[10];

for (int j=0;j<10;j++){
printf("\nEnter value at %d index:", j);
scanf("%d", &arr[j]);
}

for (int k=0;k<10;k++){
if (_odd(arr[k])==1){
arr2[count]=k;
count+=1;
}
}

printf("There are total %d odd numbers:", count);
for (int a=0;a<count;a++){
printf(" %d", arr[arr2[a]]);
}
printf("\n");
}


int _odd(int n){
int _val=1;
for (int i=2;i<n;i++){
if (n%2==0){
_val=0;
break;
}
}
return _val;
}
