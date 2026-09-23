#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string s;
    int n,a[26]={0};
    cin>>n>>s;
    for(int i=0;i<n;i++){
        s[i]=tolower(s[i]);
        a[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(a[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}