#include<iostream>
#include<sstream>
#include<cstring>

using namespace std;

int main(){

FILE *f1=fopen("in.txt","r");
FILE *f2=fopen("ou.txt","w");
char ch[100];
string result=" ";

if(!f1 || !f2){
  cout<<"error opening file\n";
return 1;
}

while((fgets(ch,sizeof(ch),f1))){
   
   stringstream ss(ch);
   string word;
    ss>>word;
    
    
     for(int i=0;i<word.length();i++){
      result += word[i] + 4;
        
       
    
  cout<<"Shifted character:"<<endl;
  fprintf(f2,"%s",result.c_str());
     }
  }
fclose(f1);
fclose(f2);

return 0;
}
