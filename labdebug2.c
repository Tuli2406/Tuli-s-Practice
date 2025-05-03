#include<stdio.h>
#include<math.h>


int main(){

int n[5],s,i,j,w;
for(i=0;i<5;i++){

   printf("Enter any integer:");
   scanf("%d",&n[i]);
   s=0;

   for(j=1;j<=i;j++){
     if(n[j]<n[s])
        s=j;

      w=n[i];
      n[i]=n[s];
      n[s]=w;

} 

for(i=0;i<5;i++)
   printf("%d\n",n[i]);

}








}
