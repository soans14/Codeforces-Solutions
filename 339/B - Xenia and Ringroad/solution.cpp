#include <iostream>
 
using namespace std;
 
int main(){
    long long int n,m,ans;
    cin>>n>>m;
    long long int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    ans=a[0]-1;
    for(int i=0;i<m-1;i++){
        if(a[i]>a[i+1]){
            ans+=n-a[i]+a[i+1];
        }
        else if(a[i]<a[i+1]){
            ans+=(a[i+1]-a[i]);
        }
    }
    cout<<ans;
    return 0;
}