#include<stdio.h>
#include<math.h>
int main(){

int n,i;
int count;

while(1){

printf("Enter a number(0 to quit):");
scanf("%d",&n);

  if(n==0)
   {
    break;
   }

  if(n<2){
   printf("%d is not prime",n);
   continue;
   }
  
  count=1;
  int lim=sqrt(n);
  for(i=2;i<=lim;i++){

  if(n%i==0){
    count=0;
    break;
   }      
  }
  if(count==1)
  {
    printf("%d is prime\n",n);
  }
  else
  {
    printf("%d is not prime\n",n);
  }

}
  
return 0;

}



