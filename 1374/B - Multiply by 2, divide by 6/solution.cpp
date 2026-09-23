#include <iostream>
using namespace std;
 
int main() {
    long long t,n,ans;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        ans=0;
        while(n!=1){
            if(n%3!=0){
                ans=-1;
                break;
            }
            else{
                if(n%2==0){
                    n/=6;
                    ans++;
                }
                else{
                    n/=3;
                    ans+=2;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}