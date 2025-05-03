#include<iostream>
#include<map>
#include<sstream>
#include<cstring>

using   namespace std;

int main(){
FILE *f,*f2;
int count=0;
char ch[100];
string str="";
map<string,int>mp;
f=fopen("doc1.txt","r");
f2=fopen("out.txt","w");

  if(f == NULL){
        cout << "Error opening file" << endl;
        return 1;
    }


while((fgets(ch,sizeof(ch),f))){
  cout<<ch<<endl;

for(int i=0;i<=strlen(ch);i++){
 
  count++;

}

}

stringstream ss(ch);
string word;
while(ss>>word){
    mp[word]++;
}


cout<<"Output: \n";
    map<string,int>::iterator it;
    for(auto it:mp){
        cout<<"Letter:"<<it.first<<" "<<"Count:"<<it.second<<endl;
        fprintf(f2,"%s,%d",it.first.c_str(),it.second);
    }

 fclose(f);
 fclose(f2);

}
