//改进：使用map
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <map>
 
using namespace std;
 
int main()
{
    string input,del;
    getline(cin,input);
    map<char,int> strs;
    while(1){
        char c = getchar();
        if(c == '\n') break;
        strs[c] = 1;
    }
    for(int i = 0; i < input.length(); i++){
        char c = input[i];
        if(strs.find(c) != strs.end()) continue;
        printf("%c",c);
    }
    cout << endl;
    return 0;
}

 
