#include <iostream>
 
using namespace std;
 
int main(){
    int a,b,temp=0,ans=0,extra=0;
    cin>>a>>b;
    while(a>0||temp>=b){
        ans+=a;
        temp+=(a%b);
        a/=b;
        if(temp>=b){
            extra+=(temp/b);
            temp%=b;
            temp+=(extra%b);
            ans+=extra;
            extra/=b;
        }
    }
    cout<<ans;
    return 0;
}