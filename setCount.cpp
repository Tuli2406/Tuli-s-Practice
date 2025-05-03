#include <iostream>
#include <sstream>
#include <set>
#include <cstring>

using namespace std;

int main() {
    set<string>s;
    FILE *file1,*file2,*file3;
     file1 = fopen("in1.txt", "r");
     file2 = fopen("in2.txt","r");
     file3 = fopen("out0.txt","w");
/*    if (!file1 && !file2 && file3) {
        cout << "File couldn't be opened." << endl;
        return 1;
    }
*/
    char ch1[100],ch2[100];
    string str1,str2;
    while ((fgets(ch1, sizeof(ch1), file1))&&(fgets(ch2,sizeof(ch2),file2))) {
         str1+=ch1;
         str2+=ch2;
        
    }


  for (int i = 0; i < str1.length(); i++) {
           for(int j=0;j<str2.length();j++){
           // string let1 = str1.substr(i, 1);
            
            if (str1[i] == str2[j]) {
                string ch=str1.substr(i,1);
                s.insert(ch);
                break;
            
                }
            }
        }

    fclose(file1);
    fclose(file2);


    for (auto it : s) {
        cout << it << endl;
       fprintf(file3,"%s",it.c_str());
    }

    return 0;
}
