#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string s;
    getline(cin,s);
    int a[26]={0};
    for(int i=1;i<s.size()-1;i+=3){
        a[s[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(a[i]==0){
            count++;
        }
    }
    cout<<26-count;
    return 0;
}