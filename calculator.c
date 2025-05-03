#include<stdio.h>
int main(){

int num1,num2;
char op;

printf("Enter first number:");
scanf("%d",&num1);


printf("Enter operator:");
scanf(" %c",&op);


printf("Enter second number:");
scanf("%d",&num2);

if(op=='+')
{
printf("%d",num1+num2);
}
else if(op=='-')
{printf("%d",num1-num2);
}

else if(op=='*')
{printf("%d",num1*num2);
}


else if(op=='/')
{printf("%d",num1/num2);
}


else
{printf("%d",num1%num2);
}


return 0;



}
