#include <iostream>
using namespace std;
 
int main(){
    int n,ans=0;
    cin>>n;
    char s[2*n+1];
    for(int i=0;i<2*n;i++){
        cin>>s[i];
    }
    s[2*n]='\0';
    for(int i=0;i<2*n;i+=2){
        if(s[i]!=s[i+2]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}