#include <iostream>
#include <map>
#include <set>
#include <stdlib.h>
#include <sstream>
#include<cstring>
using namespace std;

int main() {
    map<string,int>mp;
    set<string>st;
    FILE *file1 = fopen("salary_ticket.txt", "r");
    FILE *file2 = fopen("travelers.txt", "r");
    FILE *file3 = fopen("selected.txt", "w");
    if (file1 == NULL) {
        cout << "Error opening file" << endl;
        return 1;
    }
    char ch[100];
     
    while((fgets(ch,sizeof(ch),file1))){
  
    for(int i=0;i<strlen(ch);i++){
    if(ch[i]==':'){
      ch[i]=' ';
     }
    if(ch[i]==' '){
      ch[i] ='\n';
     }
   }
 string line(ch);
 stringstream ss(ch);
 string name;
 int salary;
 ss>>name>>salary;
 mp[name] = salary;
 }

 cout<<"The list of monthly income:"<<endl;
 for(auto it:mp){
  cout<<it.first<<" "<<it.second<<endl;
  }
   cout << "Travelers\n";
   while((fgets(ch,sizeof(ch),file2))){
   string line(ch);
   stringstream ss(line);
   string word;
   ss>>word;
   st.insert(word);

 }
  for(auto it:st){
  cout<<it<<endl;
  float price = 10000 + (0.1*mp[it]);
  fprintf(file3, "%s %.2f\n", it.c_str(), price);
  }

   fclose(file1);
   fclose(file2);
   fclose(file3);
    return 0;
}
