#include <iostream>
using namespace std;
 
int main() {
    long long t,a,b,c,d,ans;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b>>c>>d;
        ans=0;
        ans=d-b;
        a+=ans;
        ans+=a-c;
        if(a-c<0 || d-b<0 || ans<0){
            cout<<-1<<endl;
            continue;
        }
        cout<<ans<<endl;
    }
    return 0;
}