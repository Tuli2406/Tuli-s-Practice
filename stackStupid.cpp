#include<iostream>
#include<stack>
#include<sstream>
#include<cstring>

using   namespace std;

int main(){
FILE *f,*f2;
char ch[100];
stack<string>s;
f=fopen("doc1.txt","r");
f2=fopen("docOut.txt","w");

  if(f == NULL){
        cout << "Error opening file" << endl;
        return 1;
    }


while((fgets(ch,sizeof(ch),f))){
  for(int i=0;i<strlen(ch);i++){
    if(ch[i]=='.'){
        ch[i]=i+1;
    }
  }
}

stringstream ss(ch);
string word;
while(ss>>word){
    s.push(word);
}


cout<<"Output: \n";
    while(!s.empty()){
        cout<<s.top()<<" ";
	  fprintf(f2,"%s",s.top().c_str());
        s.pop();
    }
  
/*
     stack<string>s2;

     while(!s.empty()){
        s2.push(s.top());
        s.pop();

     }


    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }*/

 fclose(f);
 fclose(f2);


}
