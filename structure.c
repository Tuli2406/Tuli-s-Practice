#include<stdio.h>
#include<string.h>
struct person{
int age;
char name[100];
char occupation[100];

};

int main(){
struct person person1,person2,person3,person4;
person1.age=20;
strcpy(person1.name,"tuli");
strcpy(person1.occupation,"Engineer");



person2.age=22;
strcpy(person2.name,"parvez");
strcpy(person2.occupation,"Engineer");

person3.age=25;
strcpy(person3.name,"toma");
strcpy(person3.occupation,"Engineer");

person4.age=19;
strcpy(person4.name,"maruf");
strcpy(person3.occupation,"Doctor");

printf("Age:%d\n",person1.age);
printf("Name:%s\n",person1.name);


printf("Age:%d\n",person2.age);
printf("Name:%s\n",person2.name);


printf("Age:%d\n",person3.age);
printf("Name:%s\n",person3.name);


printf("Age:%d\n",person4.age);
printf("Name:%s\n",person4.name);

return 0;



}
