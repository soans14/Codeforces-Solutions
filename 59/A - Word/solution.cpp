#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string s;
    int l=0,u=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]-'a'<0){
            u++;
        }
        else{
            l++;
        }
    }
    if(u>l){
        for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;
    return 0;
}