#include <iostream>
#include <sstream>
#include <stack>
#include <map>
#include <cstring>

using namespace std;

int main() {
    map<string, int> charCount;
    FILE *file = fopen("1.txt", "r");

    if (!file) {
        cout << "File couldn't be opened." << endl;
        return 1;
    }

    char buffer[1000];

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        string str(buffer);
        for (int i = 0; i < str.length(); i++) {
            string ch = str.substr(i, 1);
            if (charCount.empty()) {
                charCount[ch] = 1;
            } else {
                if (charCount.find(ch) == charCount.end()) {
                    charCount[ch] = 1;
                } else {
                    charCount[ch]++;
                }
            }
        }
    }

    fclose(file);



    for (auto it : charCount) {
        cout << it.first << ": " << it.second << endl;
    }

    return 0;
}
