#include <stdio.h>
#include<string.h>

typedef struct student{
int roll;
char name[20];
float cgpa;
} stu;

int main(){

//strudent1
struct student s1;
s1.roll = 1110001;
strcpy(s1.name, "Hue");
s1.cgpa=9.83;


//student2
struct student s2;
s2.roll=1110002;
strcpy(s2.name, "Ehu");
s2.cgpa=7.65;


//student3
stu s3;
s3.roll=1110003;
strcpy(s3.name, "Ueh");
s3.cgpa=5.99;

//adding studentds to array for looping
stu *arr[3]={&s1, &s2, &s3};

//prints all name
for (int i=0;i<3;i++){
printf("%s\t", arr[i]->name);
}

printf("\n");

//prints all roll
for (int i=0;i<3;i++){
printf("%d\t", arr[i]->roll);
}

printf("\n");


//prints all cgpa
for (int i=0;i<3;i++){
printf("%f\t", arr[i]->cgpa);
}

return 0;
}
