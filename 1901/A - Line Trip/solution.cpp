#include <iostream>
 
using namespace std;
 
int main() {
    long long t,n,x,dist,temp;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>x;
        dist=0;
        int a[n+1];
        a[0]=0;
        for(int i=1;i<n+1;i++){
            cin>>a[i];
        }
        for(int i=0;i<n+1;i++){
            if(i<n){
                temp=a[i+1]-a[i];
            }
            if(i==n){
                temp=2*(x-a[i]);
            }
            if(temp>dist){
                dist=temp;
            }
        }
        cout<<dist<<endl;
    }
    return 0;
}