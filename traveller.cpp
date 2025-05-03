#include<iostream>
#include<sstream>
#include<map>
#include<cstring>
using namespace std;

int main(){
map<string,int>mp;
char str[100];
FILE *file1,*file2,*file3;
file1=fopen("income.txt","r");
file2=fopen("journey.txt","r");
file3=fopen("output.txt","w");

if(!file1 || !file2 ||!file3){
cout<<"Invalid!"<<endl;
return 0;
}

while((fgets(str,sizeof(str),file1))){
for(int i=0;i<strlen(str);i++){
   if(str[i]==':'){

     str[i]= ' ';
}
}
string line(str);
stringstream ss(line);
string name;
int num;

ss>>name>>num;

mp[name]=num;
 
double ticket = 1000 + (num*0.1);
if(num>=ticket){
fprintf(file3,"%s",name.c_str());

}


}

for(auto it:mp){
cout<<it.first<<" "<<it.second<<endl;
}
 

}
