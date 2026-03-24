#include<stdio.h>
#include<string.h>

typedef struct address{
int house_no;
char block[15];
char city[10];
char state[10];
} add;

int main(){

//initialization
add r[5]={
{ 4546, "chandauti", "gaya", "bihar"}, { 8653, "ramkrishna", "patna", "bihar"}, { 2654, "wpeokf", "lucknow", "up"}, { 5786, "_DFE_F", "gorakhpur", "up"}, { 7854, "ffewf", "ranchi", "jharkhand"}
};


//printing data
for (int i=0;i<5;i++){
printf("%d , %s, %s, %s.\n", r[i].house_no, r[i].block, r[i].city, r[i].state);
}

return 0;
}
