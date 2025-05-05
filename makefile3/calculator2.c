#include<stdio.h>
int cal(int num1,char op,int num2){

if(op=='+')
{return num1+num2;}

else if(op=='-')
{
return num1-num2;
}
else if(op=='*')
{
return num1*num2;
}
else if(op=='/')
{
return num1/num2;
}

else
{return num1%num2;
}

}

int main(){
int a,b;
char op;

printf("Enter first num:");
scanf("%d",&a);

printf("Enter operator num:");
scanf(" %c",&op);


printf("Enter second num:");
scanf("%d",&b);

printf("Result:%d",cal(a,op,b));
return 0;







}
