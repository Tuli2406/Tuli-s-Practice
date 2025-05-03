#include<stdio.h>

int sum(int a,int b);
int is_prime(int n);

int global_i;

int main()
{
    int j=15,k=17;
    int s=sum(j,k);
   printf("sum = %d",s);
  return 0;
}

int is_prime(int n)
{
 int flag=1;
  if(n<=1)
    return 0;

    for(int i=2;i*i<=n;i++)
  {
   if(n%i==0)
   {
    flag = 0;
    break;
   }
  }
return flag;
}

int sum(int a,int b)
{
   int s=-1;
   if(is_prime(a) && is_prime(b))
    s=a+b;
return s;
}


