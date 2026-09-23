#include <iostream>
using namespace std;
 
int main(){
    char s[51];
    int n,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1] ){
            ans++;
        }
    }
    cout<<ans;
}