#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t,n,k,e,c;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>k;
        e=c=0;
        string s;
        cin>>s;
        int count[26]={0};
        for(int i=0;i<n;i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(count[i]%2==0){
                e++;
            }
            else{
                c++;
            }
        }
        if(n-k % 2==0){
            if(c<=k){
                cout<<"YES
";
            }
            else{
                cout<<"NO
";
            }
        }
        else{
            if(c-k<=1){
                cout<<"YES
";
            }
            else{
                cout<<"NO
";
            }
        }
        
    }
    return 0;
}