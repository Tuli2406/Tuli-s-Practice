#include<iostream>
#include<cstdio>
#include<cmath>


using namespace std;

int is_prime(int num){
  if(num<=1) return 0;

  for(int i=2;i<=sqrt(num);i++){
     if(num%i==0) return 0;
}
return 1;
}


int main(){
int num;
FILE *f1,*f2,*f3,*f4,*f5;
f1=fopen("num.txt","r");
f2=fopen("even.txt","w");
f3=fopen("odd.txt","w");
f4=fopen("prime.txt","w");
f5=fopen("non_prime.txt","w");

 if (!f1 || !f2 || !f3 || !f4 || !f5) {
        cout << "Error opening files." << endl;
        return 1;
    }

while((fscanf(f1,"%d",&num))==1){

cout<<num<<endl;

   if(num%2==0){
     fprintf(f2,"%d\n",num);
     }
   else{
   fprintf(f3,"%d\n",num);
      }

      if(is_prime(num)){
      fprintf(f4,"%d\n",num);
    }

else{
   fprintf(f5,"%d\n",num);
  }
   
     
}

    fclose(f1);
    fclose(f2);
    fclose(f3);
    fclose(f4);
    fclose(f5);

return 0;
}   
